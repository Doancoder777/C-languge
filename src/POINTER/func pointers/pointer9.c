#include <stdio.h>

// Định nghĩa một hàm tính toán với con trỏ hàm callback
void calculate(int a, int b, int (*operation)(int, int))
{
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

// Hàm cộng hai số
int add(int x, int y)
{
    return x + y;
}

// Hàm trừ hai số
int subtract(int x, int y)
{
    return x - y;
}

int main()
{
    int num1 = 10, num2 = 5;

    // Sử dụng hàm add làm callback
    calculate(num1, num2, add);

    // Sử dụng hàm subtract làm callback
    calculate(num1, num2, subtract);

    getchar();
    return 0;
}
