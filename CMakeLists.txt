cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(calculator VERSION 0.0)
find_package(wxWidgets 3.0 REQUIRED net core base)

add_executable(calculator src/main.cc)

target_include_directories(calculator PRIVATE src/backend src/frontend ${wxWidgets_INCLUDE_DIRS})

target_link_libraries(calculator PUBLIC
                        backend
                        frontend)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

