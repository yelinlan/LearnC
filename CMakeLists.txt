cmake_minimum_required(VERSION 3.27)
project(LearnC)

set(CMAKE_CXX_STANDARD 17)

# 指定lib目录
link_directories(lib)
# 指定头文件搜索路径
include_directories(include)

# 编译main函数入口文件
add_executable(${PROJECT_NAME} code/main.cpp
        code/Constants.cpp
        code/pointer.cpp
        code/struct.cpp
        include/library.h
        code/calc.cpp
        code/funpointer.cpp
        code/sort.cpp
        code/sort.cpp
        code/sort.cpp
        code/strFun.cpp
        code/memcopy.cpp
        code/contact.cpp
        code/contact.h
        code/contacttest.cpp
        code/uniontest.cpp
        code/malloctest.cpp
        code/filetest.cpp
)
# # 将动态/静态库链接到项目中
target_link_libraries(${PROJECT_NAME} liboperation.a)