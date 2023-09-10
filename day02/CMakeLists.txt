cmake_path(GET CMAKE_CURRENT_LIST_DIR FILENAME ProjectName)

project(${ProjectName})

add_executable(${ProjectName} main.cpp)
file(COPY input.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(tests)