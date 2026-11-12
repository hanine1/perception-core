find_package(GTest CONFIG REQUIRED)

add_executable(
    perception_core_tests
    point3d_test.cpp
)

target_link_libraries(
    perception_core_tests
    PRIVATE
        perception::core
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(perception_core_tests)