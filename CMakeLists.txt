cmake_minimum_required(VERSION 3.0)
set(NAME cjson2cjson)
project(${NAME} CXX)

find_package(AvogadroLibs REQUIRED)
find_package(Eigen3 REQUIRED)

add_executable(${NAME}.x ${NAME}.cpp)
target_link_libraries(${NAME}.x AvogadroIO)
target_include_directories(${NAME}.x PRIVATE "${EIGEN3_INCLUDE_DIRS}")
