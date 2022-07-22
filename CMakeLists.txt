cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(masvsdk-as-submodule CXX)

add_subdirectory(mavsdk)

add_executable(test
    test.cpp
)

target_link_libraries(test
    mavsdk
)
