
cmake_minimum_required(VERSION 3.0)

set(APAMA_HOME /home/antoine/softwareag/Apama)

include_directories(include)
include_directories(../src)

include_directories(${APAMA_HOME}/include)
link_directories(${APAMA_HOME}/lib)

set(SOURCE_FILES
        SampleEventTest.cpp
        main.cpp)

add_executable(tests ${SOURCE_FILES})
target_link_libraries(tests throughput apclient)