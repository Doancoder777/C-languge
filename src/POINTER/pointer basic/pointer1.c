#include<stdio.h>
#include<math.h>

//giới thiệu con trỏ

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Giá trị của a là: %d\n", a);
    printf("Địa chỉ của a là: %p\n", &a);
    printf("Địa chỉ được lưu trữ trong con trỏ p là: %p\n", p);
    printf("Giá trị tại địa chỉ con trỏ p trỏ đến là: %d\n", *p);

    // Thay đổi giá trị tại địa chỉ mà p trỏ đến
    *p = 20;
    printf("Giá trị của a sau khi sửa địa chỉ ô nhớ tại p = 20 là: %d\n", a);
    
    system("pause");

    // Trỏ p đến một biến mới
    int b = 10;
    p = &b;
    printf("\n\nĐịa chỉ mới của con trỏ p (trỏ đến b) là: %p\n", p);
    printf("Địa chỉ của biến b là: %p\n", &b);
    printf("Giá trị của b là: %d\n", b);
    printf("Giá trị tại địa chỉ con trỏ p trỏ đến (b) là: %d\n", *p);

    system("pause");
    return 0;
}
