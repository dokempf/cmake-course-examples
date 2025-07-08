cmake_minimum_required(VERSION 3.24)

project(helloworld LANGUAGES C CXX)

find_package(MPI REQUIRED)
find_package(fmt)

add_executable(helloworld helloworld.cc)
target_link_libraries(helloworld PRIVATE MPI::MPI_C)
if(fmt_FOUND)
    target_link_libraries(helloworld PRIVATE fmt::fmt)
    target_compile_definitions(helloworld PRIVATE USE_FMT)
endif()

include(FeatureSummary)
feature_summary(WHAT ALL)
