#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 1025; // Giá trị của biến a là 1025

    // In kích thước của kiểu int
    printf("size of integer is %d bytes\n", sizeof(int));
    // In địa chỉ của biến a và giá trị của nó
    printf("Address of a = %p, value = %d\n", &a, a);

    char *p0;  // Khai báo con trỏ p0 kiểu char
    p0 = (char*)&a; // Trỏ trực tiếp p0 đến địa chỉ của biến a, ép kiểu từ int* sang char*

    // In kích thước của kiểu char
    printf("size of char is %d bytes\n", sizeof(char));
    // In địa chỉ mà p0 trỏ đến và giá trị của byte đầu tiên tại địa chỉ đó
    printf("Address = %p, value = %d\n", p0, *p0);
    // In địa chỉ của byte tiếp theo (p0+1) và giá trị của byte đó
    printf("Address = %p, value = %d\n", p0+1, *(p0+1));

    system("pause"); // Tạm dừng chương trình (chỉ trên Windows)
    return 0;
}
