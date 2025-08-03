#include<stdio.h>

#define nhan(a,b) a*b;
#define cong(a,b) a+b;

// macro thay thế những khối lệnh phía sau vào những khối lệnh phía trước

// vì nó có dấu # nên nó được xử lý ở gian đoạn tiền xử lý preprocessor, trước cả compilation

int main(int argc, char const *argv[])
{
    int a = 5, b = 10;
    int result_nhan = nhan(a, b);
    int result_cong = cong(a, b);

    printf("Result of multiplication: %d\n", result_nhan);
    printf("Result of addition: %d\n", result_cong);
    
    
    
    getc(stdin); // Wait for input to keep the console open
    return 0;
}
