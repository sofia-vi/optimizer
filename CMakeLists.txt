cmake_minimum_required(VERSION 3.25)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)
find_package(nlohmann_json CONFIG REQUIRED)
add_executable(untitled1 main.cpp)
target_link_libraries(untitled1 nlohmann_json::nlohmann_json)

