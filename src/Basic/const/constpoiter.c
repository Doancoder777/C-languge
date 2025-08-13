#include<stdio.h>


// con trỏ hằng: // có thể trỏ bất kì đâu, nhưng chỉ đọc chứ không ghi được
void ex1(){
    int x = 10;
    const int *p = &x; // Con trỏ p trỏ đến một biến
    //*p = 20;  Sửa đổi giá trị thông qua con trỏ (bug vì con trỏ hằng chỉ read only)
    printf("Value of x: %d\n", *p); // In giá trị của biến

}



// hằng con trỏ: có thể đọc ghi bình thường nhưng nó chỉ trỏ đến một địa chỉ nhất định
void ex2(){
    int x = 20;
    int * const p = &x; // Con trỏ p là hằng, nó không thể trỏ đến địa chỉ khác
    *p = 30; // Sửa đổi giá trị thông qua con trỏ (được phép)
    printf("Value of x: %d\n", *p); // In giá trị của

    int k;
    // p = &k; // Sửa đổi địa chỉ của con trỏ (bị lỗi vì p là hằng)
    printf("Address of p: %p\n", (void*)p); // In địa chỉ của con trỏ p
}



int main(int argc, char const *argv[])
{
    // ex1();
    ex2(); // Gọi hàm ex2 để thực hiện in mảng
    
    
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
