#include <stdio.h>
/*
Toán tử trong C

1. Viết chương trình set 1 bit ở vị trí bất kỳ trong 1 byte gồm 8 bit.
2. Viết chương trình clear 1 bit ở vị trí bất kỳ trong 1 byte gồm 8 bit.
3. Viết chương trình toggle 1 bit ở vị trí bất kỳ trong 1 byte gồm 8 bit.
4. Viết chương trình in ra giá trị từng bit của 1 byte.
5. Viết chương trình nhập vào 1 số thập phân và in ra dạng nhị phân của nó.

#define SETBIT(byte, pos)   byte |= (1 << pos)

*/

void set_bit(unsigned char *byte, unsigned char pos)
{
    *byte = (*byte | (1 << pos));
}

void clear_bit(unsigned char *byte, unsigned char pos)
{
    *byte = (*byte & ~(1 << pos));
}

void toggle_bit(unsigned char *byte, unsigned char pos)
{
    *byte = (*byte ^ (1 << pos));  //đặc tính của xor là xor với 1 nó sẽ đảo lại bit
}

void print_bits(unsigned char byte)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

void print_binary_of_decimal(int decimal)
{
    // In ra 8 bit thấp nhất của số nguyên decimal
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");
}

int main()
{
    unsigned char byte = 0b00001111;
    int decimal = 25;

    // Ví dụ sử dụng các hàm (bạn tự hoàn thiện phần thân hàm)
    set_bit(&byte, 6);
    print_bits(byte);

    clear_bit(&byte, 3);
    print_bits(byte);

    toggle_bit(&byte, 0);
    print_bits(byte);

    print_binary_of_decimal(decimal);


    getc(stdin); // Wait for input to keep the console open
    return 0;
}