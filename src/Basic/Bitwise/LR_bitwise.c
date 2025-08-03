#include <stdio.h>

void print_binary(unsigned char n)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
}

void leftshift()
{
    /*
    Dịch trái bit

    Khi toán tử dịch trái được thực hiện trên một toán hạng, những bit của toán hạng được dịch về bên trái.
    Các bit bị chuyển sang trái bị mất và 0 thay vào phía bên phải của toán hạng.
    */

    unsigned char a = 0b110101010; // Example binary value

    a = a << 2; // Left shift by 1

    print_binary(a); // the result should be 0b110101000
    printf("\n");

    a = 2;

    a = a << 1;                              // Left shift by 1
    printf("Result of left shift 2 2 bit: %d\n", a); // the result should be 4
    a = 3;

    a = a << 1;
    printf("Result of left shift 3 1 bit: %d\n", a); // the result should be 6

    a = 5;
    a = a << 2;                              // Left shift by 1
    printf("Result of left shift 5 2 bit: %d\n", a); // the result should be 20

    getc(stdin); // Wait for input to keep the console open
}

void rightshift()
{
    /*
    Dịch phải bit

    Khi toán tử dịch phải được thực hiện trên một toán hạng, những bit của toán hạng được dịch về bên phải.
    Các bit bị chuyển sang phải bị mất và 0 thay vào phía bên trái của toán hạng.

    Ví dụ:
    (11000000b) >> 1 = (01100000b)
    (11000000b) >> 2 = (00110000b)
    (00111100b) >> 4 = (00000011b)

    *Note:
    - Đối với số dương, khi dịch phải ta thay bằng số 0
    - Đối với số âm, khi dịch phải ta thay bằng số 1
    - Cách nhận biết số âm là với kiểu dữ liệu biểu diễn được số âm (int, signed int, char, signed char, short...)
      thì bit trọng số cao nhất là 1 (char 0b11110000)
    */

    char a = 0b11000000; // -64 nếu là signed char
    printf("Original (a = 0b11000000): ");
    print_binary((unsigned char)a);
    printf(" (giá trị: %d)\n", a);

    char result = a >> 1;
    printf("a >> 1:                  ");
    print_binary((unsigned char)result);
    printf(" (giá trị: %d)\n", result);

    result = a >> 2;
    printf("a >> 2:                  ");
    print_binary((unsigned char)result);
    printf(" (giá trị: %d)\n", result);

    a = 0b00111100; // 60
    printf("Original (a = 0b00111100): ");
    print_binary((unsigned char)a);
    printf(" (giá trị: %d)\n", a);

    result = a >> 4;
    printf("a >> 4:                  ");
    print_binary((unsigned char)result);
    printf(" (giá trị: %d)\n", result);

    getc(stdin); // Wait for input to keep the console open
}

int main(int argc, char const *argv[])
{

    /*
    dịch trái 6 << 2 thì kết quả sẽ là dịch 2 bit sang trái, tức là nhân với 2^2 = 4
    ví dụ: 6 << 2 = 6 * 4 = 24
    dịch phải 6 >> 3 thì kết quả sẽ là dịch 3 bit sang phải, tức là chia cho 2^3 = 8
    ví dụ: 6 >> 3 = 6 / 8 = 0.
    dịch phải 6 >> 1 thì kết quả sẽ là dịch 1 bit sang phải, tức là chia cho 2^1 = 2
    ví dụ: 6 >> 1 = 6 / 2 = 3
    */
    leftshift();
    rightshift();
    return 0;
}
