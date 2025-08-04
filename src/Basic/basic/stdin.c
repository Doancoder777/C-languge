/*
scanf cho phép nhâp dữ liệu từ bàn phím, trong khi printf cho phép in dữ liệu

scanf không thể nhậ liệu khi chuỗi có dấu cách, vì vậy ta cần sử dụng gets hoặc fgets để nhập chuỗi có dấu cách

ví dụ:
#include <stdio.h>
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    gets(str); // Nhập chuỗi có dấu cách
    printf("Chuoi vua nhap: %s\n", str);
    return 0;
}

còn với scanf sẽ bị lỗi khi nhập chuỗi có dấu cách
#include <stdio.h>
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%s", str); // Sẽ không nhận chuỗi có dấu cách
    printf("Chuoi vua nhap: %s\n", str);
    return 0;
}


*/