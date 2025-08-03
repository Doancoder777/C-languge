#include<stdio.h>

int main(int argc, char const *argv[])
{

    const pi = 3.14; // Define a constant for pi

    printf("The value of pi is: %.2f\n", pi);

    // pi+= 1; // Attempt to modify the constant (this will cause an error)
    

    getc(stdin); // Wait for input to keep the console open
    return 0;
}
