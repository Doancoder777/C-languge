#include<stdio.h>
#include<stdlib.h>

// cụ thể các lưu trữ giá trị của các loại con trỏ

int main()
{
    int a = 1025; // Giá trị của biến a là 1025

    // Trong bộ nhớ, giá trị 1025 được lưu dưới dạng nhị phân:
    // 00000000 00000000 00000100 00000001 (trên hệ thống little-endian)
    int *p;  // Khai báo con trỏ p kiểu int
    p = &a;  // p trỏ đến địa chỉ của biến a

    // In kích thước của kiểu int
    printf("size of integer is %d bytes\n", sizeof(int));
    // In địa chỉ mà p trỏ đến và giá trị của biến a
    printf("Address = %d, value = %d\n", p, *p);

    char *p0;  // Khai báo con trỏ p0 kiểu char
    p0 = (char*)p; // Ép kiểu con trỏ p từ int* sang char*

    // In kích thước của kiểu char
    printf("size of char is %d bytes\n", sizeof(char));
    // In địa chỉ mà p0 trỏ đến và giá trị của byte đầu tiên tại địa chỉ đó
    printf("Address = %d, value = %d\n", p0, *p0);
    // In địa chỉ của byte tiếp theo (p0+1) và giá trị của byte đó
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));

    system("pause"); // Tạm dừng chương trình (chỉ trên Windows)
    return 0;
}
