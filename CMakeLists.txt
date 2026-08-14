cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0074 NEW)    # respect <PACKAGE>_ROOT variables in "find_package"
include(CMakePrintHelpers)

project(PylonSamples VERSION 0.0)
find_package(pylon)
find_package(OpenGL)

add_executable( LinecamCapture
  LinecamCapture.cpp
  BaslerCameraCameraParams.cpp
  BaslerCameraEventParams.cpp
  BaslerCameraChunkDataParams.cpp
  BaslerCameraTLParams.cpp
  BaslerCameraStreamParams.cpp
  imgui/imgui.cpp
  imgui/imgui_demo.cpp
  imgui/imgui_draw.cpp
  imgui/imgui_tables.cpp
  imgui/imgui_widgets.cpp
  imgui/backends/imgui_impl_glfw.cpp
  imgui/backends/imgui_impl_opengl3.cpp
)
include_directories(imgui)
target_link_libraries( LinecamCapture
        PRIVATE
        pylon::pylon
        pthread
        glfw
        OpenGL::OpenGL
        )
install( TARGETS LinecamCapture )

add_executable( SerialReader
        SerialReader.cpp
)