cmake_minimum_required(VERSION 3.10)

find_package(wxWidgets 3.0 REQUIRED COMPONENTS net core base)

if(wxWidgets_FOUND)
  message("found wxwidgets")
endif()
include(${wxWidgets_USE_FILE})

add_library(frontend STATIC 
            window.cc
            app.cc)
target_link_libraries(frontend PUBLIC ${wxWidgets_LIBRARIES})
target_link_libraries(frontend PRIVATE backend)
target_include_directories(frontend PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

