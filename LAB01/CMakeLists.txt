add_library(implementations src/Separate.cpp)
target_include_directories(implementations PUBLIC include)

add_executable(tests uts/Separate_tests.cpp)
target_link_libraries(tests gmock_main gtest gmock implementations)
