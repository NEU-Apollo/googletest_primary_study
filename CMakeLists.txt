cmake_minimum_required(VERSION 3.10.0)
project( test_project ) 

set(CMAKE_CXX_STANDARD 17)

include_directories( ./include )

add_executable( test_project ./src/main.cpp)
target_link_directories(test_project PUBLIC ./lib )
target_link_libraries(test_project gtest gtest_main gmock gmock_main pthread)
