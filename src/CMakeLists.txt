cmake_minimum_required(VERSION 3.7)

set(SOURCE_FILES SampleEvent.cpp SampleEvent.h)

add_library(throughput SHARED ${SOURCE_FILES})