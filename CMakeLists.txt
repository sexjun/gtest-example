cmake_minimum_required(VERSION 3.0.0)
project(gtest_example VERSION 0.1.0)

include(CTest)
enable_testing()

# 1. 将googletest纳入编译范围
add_subdirectory(./lib/googletest)
add_executable(gtest_example main.cpp)
# 2. 链接gtest到目标文件
target_link_libraries(gtest_example gtest)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
