cmake_minimum_required(VERSION 2.8)
project(ng.xplane.fdr)

set(CMAKE_CXX_STANDARD 11)

include(./cmake/ucm.cmake)

ucm_set_runtime(DYNAMIC)

include_directories(./SDK/CHeaders/XPLM)

string(TIMESTAMP BUILDTIME "%Y%m%d%H%M")
add_definitions(-DBUILDTIME="${BUILDTIME}")
add_definitions(-DIBM)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    ucm_add_flags(CXX -fvisibility=default -fpermissive)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    ucm_add_flags(CXX /W3)
endif()


set(SOURCES source/main.cpp
   )

add_library(ng.xplane.fdr SHARED ${SOURCES})
set_target_properties(ng.xplane.fdr PROPERTIES PREFIX "")
target_link_libraries(ng.xplane.fdr ../SDK/Libraries/Win/XPLM_64)
set_property(TARGET ng.xplane.fdr PROPERTY POSITION_INDEPENDENT_CODE ON)
