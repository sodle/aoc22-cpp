cmake_path(GET CMAKE_CURRENT_LIST_DIR PARENT_PATH ProjectPath)
cmake_path(GET ProjectPath FILENAME ProjectName)
set(TestProjectName "${ProjectName}_tests")

project(${TestProjectName})

set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(${TestProjectName}_run tests.cpp)
target_link_libraries(${TestProjectName}_run ${Boost_LIBRARIES})
file(COPY input.txt DESTINATION ${CMAKE_CURRENT_BINARY_DIR})