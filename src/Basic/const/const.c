#include <stdio.h>

void ex1()
{
    /*
   const kết hợp với biến toàn cục thì kiểu gì nó cũng nằm trong vùng nhớ hằng

   const nằm trong hàm sẽ là nằm trong nhớ stack trừ trường hợp
   (char * s = "Hello, World!" nó sẽ là hằng số, ta thêm const thì nó vẫn sẽ là hằng số);

   const nằm trong hàm nó sẽ ở trong vùng nhớ stack và ta có thể thay đổi giá trị của nó bằng
   con trỏ nếu nó là mảng hoặc không được gán là một chuỗi hằng. Nhưng chính nó không thể tự thay
   dổi giá trị của nó.



   khi khai báo một biến là hằng số (const), bạn không thể thay đổi giá trị của nó sau khi đã gán.
   Ví dụ, nếu bạn khai báo một mảng hằng số như sau:
   const int arr[] = {1, 2, 3, 4, 5};
   thì bạn không thể thay đổi giá trị của bất kỳ phần tử nào trong mảng đó
   nhưng bạn vẫn có thể thay đổi giá trị của con trỏ trỏ đến mảng đó.
   Ví dụ:
   */

    const char s[] = "Hello, World!";
    // s[0] = 'h'; // Sửa đổi ký tự đầu tiên của chuỗi (bị lỗi vì s là hằng số)
    printf("%s\n", s); // In chuỗi đã sửa đổi
    char *p = s;       // ← SỬA TẠI ĐÂY
    p[0] = 'Z';        // Sửa đổi ký tự đầu tiên của chuỗi thông qua con trỏ
    printf("%s\n", p); // In chuỗi đã sửa đổi

    /*
    Cách này áp dụng đối với code C được những với C++ thì không thể sửa đổi giá trị của mảng hằng số thông qua con trỏ.

    */
}

void ex2(){
    const int x = 10;
    int *p = &x; // Con trỏ p trỏ đến một biến hằng số
    // x = 20; // Sửa đổi giá trị của biến hằng số (bị lỗi vì x là hằng số)
    *p = 20; // Sửa đổi giá trị thông qua con trỏ (không được khuyến nghị)
    printf("Value of x: %d\n", x); // In giá trị của biến
    
}

int main(int argc, char const *argv[])
{
    ex2();

    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
