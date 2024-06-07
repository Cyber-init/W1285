cmake_minimum_required(VERSION 3.10)

# 项目信息
project(PMSYS VERSION 1.0.0 LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置编译输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/target)

add_compile_options(-fexec-charset=GBK)

# 包含子目录
add_subdirectory(src)