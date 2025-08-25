// #include "array.h"

/*
flie array.h chỉ được dung để khai báo tên hàm. không định nghĩa và trong file đó
nếu ta định nghĩa hàm trong file đó thì khi ta include file đó vào nhiều file khác nhau
nó sẽ bị lỗi trùng lặp định nghĩa hàm (Multiple definition of ...)

vì vậy ta phải tuân thủ nguyên tắc:

file.c chỉ định nghĩa hàm
file.h chỉ khai báo hàm

nếu muốn tránh lỗi trùng lặp khai báo hàm thì ta dùng #ifndef, #define, #endif 
để bao bọc toàn bộ nội dung file.h
*/