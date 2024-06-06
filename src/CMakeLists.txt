# 获取 src 目录下的所有源文件
file(GLOB_RECURSE SOURCES "*.cpp")

# 添加可执行文件
add_executable(PMSYS ${SOURCES})

# 包含头文件目录
target_include_directories(PMSYS PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 设置可执行文件的输出目录
set_target_properties(PMSYS PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})