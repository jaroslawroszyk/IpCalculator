cmake_minimum_required(VERSION 3.20)
project(Calculator)
set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME} Calc.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${CONAN_LIBS})