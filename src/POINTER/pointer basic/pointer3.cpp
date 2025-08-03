#include <stdio.h>
#include <stdlib.h>

// khoảng cách bộ nhớ cấp phát giữa các biến

int main(int argc, char const *argv[])
{
    int a;            // Biến kiểu char
    int *b;           // Con trỏ kiểu char
    int c;             // Biến kiểu int
    char *d;             // Biến kiểu int
    char f;             // Biến kiểu int
    
    // In địa chỉ của biến a
    printf("Address of a: %d\n", &a);
    // In địa chỉ của con trỏ b
    printf("Address of b: %d\n", &b);
    // In địa chỉ của biến c
    printf("Address of c: %d\n", &c);
    // In địa chỉ của biến c
    printf("Address of c: %d\n", &d);
    printf("Address of f: %d\n", &f);

    system("pause");
    return 0;
}
