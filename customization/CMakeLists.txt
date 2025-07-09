cmake_minimum_required(VERSION 3.24)

project(helloworld)

option(ENABLE_POSITIVE "Whether we have a positive mindset." OFF)

add_executable(helloworld helloworld.cc)
if(ENABLE_POSITIVE)
  target_compile_definitions(helloworld PRIVATE POSITIVE)
endif()

install(TARGETS helloworld)
