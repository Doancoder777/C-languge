
// Arrays are always passed to function by reference.

#include <stdio.h>

void print(char C[]) {
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

void setChar(char* C) {
   C[4] = 'u';
}

int main() {
    
     char C[20] = "Hello"; // chuỗi được lưu trữ trong không gian của mảng
    // char *C = "Hello";      // chuỗi được lưu trữ như là hằng số tại thời gian biên dịch

    setChar(C);
    print(C);

    getchar();
    return 0;
}
