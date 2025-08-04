#include<stdio.h>

void changeValue(int *p)
{
    *p = 20; // Thay đổi giá trị tại địa chỉ mà p trỏ đến

    /*
    p là địa chỉ
    *p là giá trị tại địa chỉ đó
    Khi gọi hàm này, giá trị của biến sẽ được thay đổi trực tiếp thông qua
    con trỏ, không cần trả về giá trị.
    */
}

int main(int argc, char const *argv[])
{

    int a = 10; // Khởi tạo biến a với giá trị 10
    printf("Before change: a = %d\n", a); // In giá trị ban đầu của a
    changeValue(&a); // Gọi hàm changeValue với địa chỉ của a
    printf("After change: a = %d\n", a); // In giá trị của a sau khi thay đổi
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
