cmake_minimum_required(VERSION 3.10.2)
project(server CXX)

set(CXX_FLAGS -g -Wall -std=c++11 -D_PTHREADS -Wno-unused-parameter)
aux_source_directory(./src SRC)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(server ${SRC})


target_link_libraries(server pthread mysqlclient)