#include <stdio.h>
#define CUBE(x) (x*x*x)

int main()
{
    int a, b = 3;
    // Macro CUBE(b++) sẽ được thay thế thành (b++ * b++ * b++)
    // Quá trình thực hiện:
    // - Lần 1: lấy giá trị 3, b tăng thành 4
    // - Lần 2: lấy giá trị 4, b tăng thành 5
    // - Lần 3: lấy giá trị 5, b tăng thành 6
    // => Kết quả: 3 * 4 * 5 = 60, b cuối cùng là 6
    a = CUBE(b++);

    printf("%d, %d\n", a, b);
    getchar(); // Đợi người dùng nhấn Enter trước khi kết thúc chương trình
    
    return 0;
}