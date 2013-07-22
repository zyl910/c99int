# c99inttest: c99int test for C.
cmake_minimum_required(VERSION 2.6)
project(c99inttest)
include_directories(${PROJECT_SOURCE_DIR}/../../src)
AUX_SOURCE_DIRECTORY(. SRC_LIST) 
SET(SRC_LIST ${SRC_LIST} ../../src/auto_stdint.h)
SET(SRC_LIST ${SRC_LIST} ../../src/auto_inttypes.h)
ADD_EXECUTABLE(c99inttest ${SRC_LIST})

