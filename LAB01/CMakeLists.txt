add_library(implementations src/LAB01.cpp)
target_include_directories(implementations PUBLIC include)

add_executable(tests uts/LAB01_tests.cpp)
target_link_libraries(tests gmock_main gtest gmock implementations)
