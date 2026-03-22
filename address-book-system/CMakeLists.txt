cmake_minimum_required(VERSION 3.10)

# 项目名
project(Class)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含头文件目录
include_directories(include)

# 收集源文件
file(GLOB SRC_FILES src/*.cpp)

# 生成可执行文件
add_executable(main ${SRC_FILES})

# 生成 compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)