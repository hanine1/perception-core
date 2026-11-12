cmake_minimum_required(VERSION 3.28)

project(
    perception_core
    VERSION 0.1.0
    LANGUAGES CXX
)

find_package(Eigen3 CONFIG REQUIRED)

add_library(
    perception_core
    src/version.cpp
)

add_library(
    perception::core
    ALIAS
    perception_core
)

target_compile_features(
    perception_core
    PUBLIC
        cxx_std_20
)

set_target_properties(
    perception_core
    PROPERTIES
        CXX_EXTENSIONS OFF
)

target_include_directories(
    perception_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    perception_core
    PUBLIC
        Eigen3::Eigen
)

add_executable(
    perception_core_version_example
    examples/version_example.cpp
)

target_link_libraries(
    perception_core_version_example
    PRIVATE
        perception::core
)

include(CTest)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()