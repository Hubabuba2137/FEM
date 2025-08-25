cmake_minimum_required(VERSION 4.0.3)
project(MES)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    main.cpp
    src/mes/mes.cpp
    src/mes/matrix/matrix.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})