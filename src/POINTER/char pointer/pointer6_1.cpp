#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    // khởi tạo mảng ký tự có '\0' ngầm định
    // char c0[6] = "hello";

    // Khởi tạo mảng với ký tự '\0'
    char c1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // Khởi tạo mảng không có ký tự '\0'
    char c2[5] = {'h', 'e', 'l', 'l', 'o'};

    // In độ dài và chuỗi c1 (có '\0')
    printf("Độ dài của c1 (có '\\0'): %d\n", strlen(c1));
    printf("Chuỗi c1: %s\n", c1);

    // In độ dài và chuỗi c2 (không có '\0')
    printf("Độ dài của c2 (không có '\\0'): %d\n", strlen(c2));
    printf("Chuỗi c2: %s\n", c2);

    system("pause");
    return 0;
}
