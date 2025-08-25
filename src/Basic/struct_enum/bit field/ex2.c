#include<stdio.h>
#include<string.h>

struct x {
    short a : 2;
    short b : 15;
    char c;
    // nếu để là char c : 1 bit thì struct sẽ chiếm 4 bytes
};

struct y {
    int a : 2;
    int b : 15;
    char c;
};

int main(int argc, char const *argv[])
{
    // printf("Size of struct x: %zu bytes\n", sizeof(struct x)); // 6 bytes
    printf("Size of struct y: %zu bytes\n", sizeof(struct y));  // 8 bytes



    getchar();
    return 0;
}
