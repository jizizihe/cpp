###使用g++编译
#g++ hello.cpp -o hello.o
###如果是多个c++代码文件，如hello.cpp hello_2.cpp
#g++ hello.cpp hello_2.cpp -o hello.o
###使用gcc编译，需要链接c++标准库
gcc 1_hello.cpp -o 1_hello.o  -lstdc++
g++ 2_const.cpp -o 2_const.o
g++ 3_array.cpp -o 3_array.o
g++ 4_string.cpp -o 4_string.o
g++ 5_pointer.cpp -o 5_pointer.o
g++ 6_reference.cpp -o 6_reference.o
g++ 7_ctime.cpp -o 7_ctime.o
g++ 8_io.cpp -o 8_io.o
g++ 9_struct.cpp -o 9_struct.o
