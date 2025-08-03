#include <stdio.h>

int main() {
    int a = 12;    // Khai báo biến a với giá trị 10
    void *ptr = &a; // Khai báo con trỏ ptr trỏ tới biến a

    // Dereference con trỏ ptr để lấy giá trị của a mà không ép kiểu

    // printf("Gia tri cua a = %d\n", *ptr);
    
    // printf("Gia tri cua a = %d\n", *(int*)ptr);

    printf("Nhan Enter de thoat...");
    getchar();
    return 0;
}
