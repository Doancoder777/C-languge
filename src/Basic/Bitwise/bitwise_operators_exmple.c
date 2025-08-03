#include<stdio.h>

void print_binary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main(int argc, char const *argv[])
{
   unsigned char a = 0b10101010; // Example binary value
   unsigned char b = 0b00110101; // Another binary value
   print_binary(a);
    printf("\n");
    print_binary(b);
    printf("\n");

   unsigned char result_and = a & b; // Bitwise AND
   unsigned char result_or = a | b;  // Bitwise OR
   unsigned char result_xor = a ^ b; // Bitwise XOR
   unsigned char result_not_a = ~a; // Bitwise NOT on a

    printf("Result of Bitwise AND : 0b");



    
    print_binary(result_and);
    printf("\n");

    printf("Result of Bitwise OR  : 0b");
    print_binary(result_or);
    printf("\n");

    printf("Result of Bitwise XOR : 0b");
    print_binary(result_xor);
    printf("\n");

    printf("Result of Bitwise NOT a: 0b");
    print_binary(result_not_a);
    printf("\n");

    getc(stdin); // Wait for input to keep the console open
    return 0;
}