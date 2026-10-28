
cmake_minimum_required(VERSION 3.16)

project(CppBugfixAgent LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(student_app
    src/main.cpp
    src/Student.cpp
    src/GradeCalculator.cpp
    src/ReportGenerator.cpp
)

target_include_directories(student_app PRIVATE src)
