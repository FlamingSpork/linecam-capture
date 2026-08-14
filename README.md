# Line Camera Capture Tool

## Build deps
Requires [Basler Pylon](https://www.baslerweb.com/en-us/downloads/software/1932603569/?downloadCategory.values.label.data=pylon) to communicate with the camera.
I used v25.10, but other versions are likely to work
```
apt-get install libglfw3-dev libopengl-dev build-essential cmake
```

## To build
```
cmake .
```

## To run
```
./LinecamCapture -e 250 -g 500
```

- `-e` is exposure time in microseconds (250 microseconds = 1/4000 s)
- `-g` is gain; 1-500 on color cameras and 1-800 on monochrome cameras