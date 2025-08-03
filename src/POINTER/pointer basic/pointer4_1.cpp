#include <stdio.h>

// con trỏ void và tham chiếu có ép kiểu


int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    // Khai báo một con trỏ void
    void *ptr;

    // Trỏ đến biến kiểu int
    ptr = &a;
    printf("Gia tri cua a = %d\n", *(int *)ptr);

    // Trỏ đến biến kiểu float
    ptr = &b;
    printf("Gia tri cua b = %.2f\n", *(float *)ptr);

    // Trỏ đến biến kiểu char
    ptr = &c;
    printf("Gia tri cua c = %c\n", *(char *)ptr);

    // Dừng chương trình để xem kết quả
    printf("Nhan Enter de thoat...");
    getchar();

    return 0;
}
