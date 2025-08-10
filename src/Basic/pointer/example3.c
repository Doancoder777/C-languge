#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// viet chuong trinh tao ngau nhien 10 so nguyen tu 1 den 100

int *taosinh(){
    static int r; // biến r sẽ nằm trong vùng nhớ data segment, vì nó là biến tĩnh
    // nên nó sẽ không bị giải phóng khi hàm kết thúc, và ta có
    srand(time(NULL)); // Khởi tạo seed cho hàm rand
    r = rand() % 100 + 1; // Tạo số ngẫu nhiên
    return &r; // Trả về địa chỉ của biến r
}

void ex1(){
    int *p = taosinh(); // Gọi hàm để lấy địa chỉ của số ngẫu nhiên
    printf("Số ngẫu nhiên: %d\n", *p); // In giá trị tại địa chỉ mà p trỏ đến
    printf("Địa chỉ của số ngẫu nhiên: %p\n", (void*)p); // In địa chỉ mà p đang trỏ đến
}

int main(int argc, char const *argv[])
{
    ex1(); // Gọi hàm ex1 để thực hiện chương trình
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
