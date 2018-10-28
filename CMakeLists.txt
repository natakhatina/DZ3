cmake_minimum_required(VERSION 3.6)
#set(name NewProjectFromZeroToHero)
#project(${name})

project(DZ3)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/headers)
file(GLOB sources ${PROJECT_SOURCE_DIR}/realisation/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/headers/*.h)


add_executable(DZ3 main.cpp ${sources} ${headers} )