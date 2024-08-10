cmake_minimum_required(VERSION 3.14)
project(RayTracingInOneWeekend)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -Wextra")
add_link_options("-fuse-ld=lld")

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

include_directories(include)
file(GLOB srcRayTracing "src/*.cpp")

add_executable(rayTracing ${srcRayTracing})
