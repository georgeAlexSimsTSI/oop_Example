cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(oopExample VERSION 1.0)
set(SRC_FILES src/car.cpp src/dog.cpp src/cat.cpp src/variadicArgsTest.cpp src/animal.cpp src/animal_cat.cpp)
add_executable(${PROJECT_NAME} src/main.cpp ${SRC_FILES} )