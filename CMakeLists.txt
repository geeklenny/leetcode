project(helloworld)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_FLAGS "-Wall -static-libstdc++ -DCPPTEST -DBY_THREAD -std=c++14")
#cmake -DCMAKE_BUILD_TYPE=debug ../
set(CMAKE_CXX_FLAGS_DEBUG "-g3")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(2sum)






