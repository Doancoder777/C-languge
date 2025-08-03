#include<stdio.h>

//demo\variable_ram.html

int main(int argc, char const *argv[])
{
    unsigned char a = 'A';
    unsigned char b = 'B';
    int c = 0;
    long long d = 0;
    float f;
    double e = 0.0;

    printf("dia chi cua a la: %d", &a);
    printf("\ndia chi cua b la: %d", &b);
    printf("\ndia chi cua c la: %d", &c);
    printf("\ndia chi cua d la: %d", &d);
    printf("\ndia chi cua f la: %d", &f);
    printf("\ndia chi cua e la: %d", &e);
    
    
    getc(stdin);
    return 0;
}
