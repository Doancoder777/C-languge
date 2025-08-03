#include <stdio.h>
#include <stdlib.h>

//bộ nhớ của từng kiểu dữ liệu và con trỏ của chúng

int main(int argc, char const *argv[])
{
    char a;            // Biến kiểu char
    char *b;           // Con trỏ kiểu char
    int c;             // Biến kiểu int
    int *d;            // Con trỏ kiểu int
    long long e;       // Biến kiểu long long
    long long *f;      // Con trỏ kiểu long long*
    float g;           // Biến kiểu float
    float *h;          // Con trỏ kiểu float
    double i;          // Biến kiểu double
    double *j;         // Con trỏ kiểu double

    // In kích thước của các biến và con trỏ
    printf("Size of a (char): %d bytes\n", (int)sizeof(a));
    printf("Size of b (char*): %d bytes\n", (int)sizeof(b));
    printf("Size of c (int): %d bytes\n", (int)sizeof(c));
    printf("Size of d (int*): %d bytes\n", (int)sizeof(d));
    printf("Size of e (long long): %d bytes\n", (int)sizeof(e));
    printf("Size of f (long long*): %d bytes\n", (int)sizeof(f));
    printf("Size of g (float): %d bytes\n", (int)sizeof(g));
    printf("Size of h (float*): %d bytes\n", (int)sizeof(h));
    printf("Size of i (double): %d bytes\n", (int)sizeof(i));
    printf("Size of j (double*): %d bytes\n", (int)sizeof(j));

    system("pause");
    return 0;
}
