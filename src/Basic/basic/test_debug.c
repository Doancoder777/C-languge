#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ten[] = "Nguyen Van A";
    int tuoi = 20;
    char dia_chi[] = "123 Nguyen Trai, Hanoi";

    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Dia chi: %s\n", dia_chi);
    getc(stdin); // Wait for input to keep the console open
    return 0;
}
