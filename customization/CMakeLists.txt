cmake_minimum_required(VERSION 3.11)

project(helloworld)

option(POSITIVE "Whether we have a positive mindset." OFF)

add_executable(helloworld helloworld.cc)
target_compile_definitions(helloworld PRIVATE POSITIVE)

install(TARGETS helloworld)
