cmake_minimum_required(VERSION 3.20)
project(Czhuanben C)

set(CMAKE_C_STANDARD 99)

add_executable(Main main.c)
add_executable(FindMax FindMax.c)
add_executable(Sort Sort.c)
add_executable(SortNum SortNum.c)
add_executable(fff1 fff1.c)
add_executable(Test Test.c)
# 遍历项目根目录下所有的 .c 文件
#file (GLOB files *.c)
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable (${exe} ${file} SortNum.c Sort.c FindMax.c)
#    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
#endforeach ()