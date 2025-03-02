cmake_minimum_required(VERSION 3.30)
project(TimberProj)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#Add google logging
find_package(glog REQUIRED)

#Add SMFL
include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.0.0
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(Timber Timber.cpp)

target_compile_features(Timber PRIVATE cxx_std_17)
target_link_libraries(Timber PRIVATE SFML::Graphics glog::glog)

#
#include_directories("/usr/local/include/" , "/usr/local/lib/")

#include(FetchContent)
#FetchContent_Declare(
#        glog
#        GIT_REPOSITORY https://github.com/google/glog
#        GIT_TAG v0.7.1
#)
#FetchContent_MakeAvailable(glog)

#target_link_libraries(Timber glog glog_main)

#find_library(sfml sfml REQUIRED)

#target_link_libraries(Timber PRIVATE "${SFML}")
#target_link_libraries(Timber sfml-graphics-d sfml-window sfml-system)