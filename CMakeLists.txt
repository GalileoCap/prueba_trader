cmake_minimum_required(VERSION 3.14)
project(PruebaTecnica)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++20")

include(FetchContent)
FetchContent_Declare(
  cxxopts
  GIT_REPOSITORY https://github.com/jarro2783/cxxopts
  GIT_TAG v3.1.1
)
FetchContent_MakeAvailable(cxxopts)
FetchContent_GetProperties(cxxopts)
if(NOT cxxopts_POPULATED)
    FetchContent_Populate(cxxopts)
    add_subdirectory(${cxxopts_SOURCE_DIR} ${cxxopts_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

file(GLOB SOURCE_FILES src/*.cc)
add_executable(PruebaTecnica ${SOURCE_FILES})
target_include_directories(PruebaTecnica PRIVATE src/include)
target_link_libraries(PruebaTecnica PUBLIC cxxopts)
