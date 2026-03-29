#include <iostream>
#include <fstream>
#include <getopt.h>
#include <random> // *holds up spork*

#include <opencv2/opencv.hpp> // in theory, I could do this with something smaller than opencv, but opencv is what I know

using namespace std;
using namespace cv;

#define KTS_TO_MS 0.5144
#define GPS_SENTINEL -999.9

// if I were writing a GUI for this, I'd call it grindshow, after the Seeming song

enum AccelDir {
    POS_X,
    NEG_X,
    POS_Y,
    NEG_Y,
    POS_Z,
    NEG_Z
};

long accelTime(const string& l) {
    // acceleration timestamp in ms
    // we know the first char is 'A' and ignore it
    int comma = l.find(',');
    return stol(l.substr(1,comma+1));
}

float accelParse(string l, enum AccelDir dir) {
    // ***DESTRUCTIVE***; copy a string you care about before feeding it in
    // a typical line looks like "A489319,0.22,-0.91,9.94" -> A(time ms),(x),(y),(z)
    // since we're not decomposing vectors or anything, we only need one axis' movement
    l.erase(0, l.find(',')+1); // "0.22,-0.91,9.94"
    if(dir == POS_X) {
        return stof(l.substr(0, l.find(',')));
    }
    if(dir == NEG_X) {
        return -1.0f * stof(l.substr(0, l.find(',')));
    }
    l.erase(0, l.find(',')+1); // "-0.91,9.94"
    if(dir == POS_Y) {
        return stof(l.substr(0, l.find(',')));
    }
    if(dir == NEG_Y) {
        return -1.0f * stof(l.substr(0, l.find(',')));
    }
    l.erase(0, l.find(',')+1); // "9.94"
    if(dir == POS_Z) {
        return stof(l.substr(0, l.find(',')));
    }
    if(dir == NEG_Z) {
        return -1.0f * stof(l.substr(0, l.find(',')));
    }
    return 0.0; // should be unreachable
}

float gpsVelocity(string l) {
    // destructive!!
    // returns meters/s
    // a typical line looks like: "$GNRMC,183341.572,V,,,,,0.00,0.00,101225,,,N*5A" -> V indicates no fix
    // or "$GNRMC,201248.600,A,4225.6852,N,07103.8390,W,0.00,215.77,091225,,,A*6D" -> A indicates fix; 0.00 is the knots speed
    if(l.substr(0, l.find(',')) != "$GNRMC") {
        // we only care about Recommended Minimum Navigation
        return GPS_SENTINEL;
    }
    l.erase(0, l.find(',')+1);
    l.erase(0, l.find(',')+1); // yes, this looks silly, but it's super easy to implement
    if(l.substr(0, l.find(',')) != "A") {
        // data not valid / no GNSS fix
        return GPS_SENTINEL;
    }
    l.erase(0, l.find(',')+1); // latitude
    l.erase(0, l.find(',')+1); // North/South
    l.erase(0, l.find(',')+1); // longitude
    l.erase(0, l.find(',')+1); // East/West
    return KTS_TO_MS * stof(l.substr(0, l.find(',')));
}

enum AccelDir parseArgDir(char *arg) {
    string strArg = arg; // literally just doing this because strcmp and similar ancient C garbage hurt my head
    if(strArg == "x" || strArg == "px" || strArg == "+x") {
        return POS_X;
    }
    if(strArg == "mx" || strArg == "nx" || strArg == "-x") {
        return NEG_X;
    }
    if(strArg == "y" || strArg == "py" || strArg == "+y") {
        return POS_Y;
    }
    if(strArg == "my" || strArg == "ny" || strArg == "-y") {
        return NEG_Y;
    }
    if(strArg == "z" || strArg == "pz" || strArg == "+z") {
        return POS_Z;
    }
    if(strArg == "mz" || strArg == "nz" || strArg == "-z") {
        return NEG_Z;
    }
    return POS_X;
}

int main(int argc, char* argv[]) {
    int c;
    bool useGPS = false, makeImage = true, badImage = false;
    enum AccelDir dir = POS_X;
    float multiplier = 1.0f;
    while ((c=getopt(argc, argv, "nbgm:d:")) != -1) {
        switch(c) {
            case 'n':
                makeImage = false; // to speed up debugging and producing velocity traces
                break;
            case 'b':
                badImage = true;
                break;
            case 'g':
                useGPS = true;
                break;
            case 'm':
                multiplier = atof(optarg);
                break;
            case 'd':
                dir = parseArgDir(optarg);
                break;
            default:
                cerr << "Failed to parse arguments!" << endl;
                return 1;
        }
    }

    string capDir = argv[optind]; // remaining option after running getopt()
    if (capDir.back() != '/') {
        capDir = capDir + "/";
    }

    ifstream metaFile(capDir+"meta.csv");
    string l;
    long lineCount = 0;
    int width = 0;
    int expTimeMicros = 0;
    // local woman rolls "worst CSV parser ever", asked to leave C++
    while(getline(metaFile, l)) {
        int commaIdx = l.find(',');
        string k = l.substr(0, commaIdx);
        string v = l.substr(commaIdx+1, l.length() - commaIdx );

        if(k == "camera.Width") {
            width = stoi(v);
        }
        if(k == "camera.ExposureTimeAbs") {
            expTimeMicros = stoi(v);
        }
        if(k == "capture.LineCount") {
            lineCount = stol(v);
        }
    }
    if(lineCount == 0 || width == 0 || expTimeMicros == 0) {
        cerr << "Failed to parse meta file " << capDir+"meta.csv" << endl;
        return 1;
    }

    ifstream serialFile(capDir+"serial.txt");
    // get lines until we get something acceleration shaped
    while(getline(serialFile, l)) {
        if(l.front() == 'A') {
            break;
        }
    }
    long firstAT = accelTime(l);
    long lastAT = firstAT;
    float lastA = accelParse(l, dir);
    // get *another* accel line
    while(getline(serialFile, l)) {
        if(l.front() == 'A') {
            break;
        }
    }
    long nextAT = accelTime(l);
    float nextA = accelParse(l, dir);

    float deltaT = (float)(nextAT - lastAT) / 1000.0f; // seconds
    float lastV = 0.0f; // this is an important assumption
    float nextV = lastV + deltaT * lastA;

    float absTime = 0.0f; // seconds!

    fstream camFile;
    camFile.open(capDir+"cam.data", ios::binary | ios::in);
    char *buf = (char*)malloc(width); // it doesn't *have* to be char*, but it's easy

    ofstream velocityCSV(capDir+"velocity.csv");
    velocityCSV<<R"lit("abs time (s)","last AT (s)","last A (m/s/s)","last V (m/s)","n (unitless)")lit"<<endl;

    vector<int> matSize(1, width);
    Mat outImg(matSize, CV_8UC1); // I believe CV_8UC1 to be 8 bit mono
    random_device randDev; // we use this instead of naïve rand() bc rand() doesn't generate uniformly
    mt19937 generator(randDev());

    for(long i = 0; i < lineCount; i++) {
        absTime = (float)i * ((float)expTimeMicros / 1000000); // TODO: this might become inaccurate if the actual capture time > exposure time
        camFile.read(buf, width); // we read one line at a time, the fstream object keeping our place in the file
        // then we calculate the velocity and use that and the multiplier to decide whether to keep the line or drop it
        float n = abs(lastV) * multiplier;
        float invN = abs(lastV) > 0.0f ? 1.0f/n : 0.0f;
        cout<<"Abs Time: "<<absTime<<" s\t AT: "<<lastAT<<" ms\t Accel: "<<lastA<<" m/s/s\t Vel: "<<lastV<<" m/s\t 1/n: "<<invN<<endl;
        velocityCSV<<absTime<<","<<(float)lastAT/1000.0f<<","<<lastA<<","<<lastV<<","<<n<<endl;
        if(badImage) {
            Mat column(matSize, CV_8UC1, buf);
            hconcat(outImg, column, outImg);
        } else if(makeImage) {
            Mat column(matSize, CV_8UC1, buf);
            if(n>=1) {
                for(int j = 0; j<round(n); j++) {
                    // duplicate round(n) times
                    hconcat(outImg, column, outImg);
                }
            }else {
                // roll a die and keep every (1/n)th line
                // TODO: consider different approaches
                //   ie Maddie's approach
                //   also look into how other programs scale images?
                uniform_int_distribution<int> distr(0, round(invN));
                if(distr(generator) == 0) {
                    hconcat(outImg, column, outImg);
                }
            }
        }

        // if current absTime > nextAT (coerced units), we need to make nextAT and nextA into lastAT and lastA and grab ourselves another line
        if(absTime > (float)( nextAT - firstAT )/1000.0f) {
            lastAT = nextAT;
            lastA = nextA;
            lastV = nextV;
            while(getline(serialFile, l)) {
                //TODO: test GPS handling
                if(l.front() == '$') {
                    if(useGPS) {
                        float gpsV = gpsVelocity(l);
                        if(gpsV != GPS_SENTINEL) {
                            lastV = gpsVelocity(l);
                            cout<<"\t\tGPS Velocity: "<<lastV<<" m/s"<<endl;
                        }
                    }
                    // no break because we still need an acceleration value to apply the velocity to
                }
                if(l.front() == 'A') {
                    nextAT = accelTime(l);
                    nextA = accelParse(l, dir);
                    break;
                }
            }
            deltaT = (float)(nextAT - lastAT) / 1000.0f;
            nextV = lastV + deltaT * lastA;
        }
    }
    if (makeImage) {
        imwrite(capDir + "out.png",
                outImg); // this is going to be biiiig, so perhaps compressing as JPG might be better
    }
    velocityCSV.close();
}