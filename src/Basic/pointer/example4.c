#include<stdio.h>
#include<string.h>

void ex1(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // Tính kích thước của mảng
    int *p = &arr[size-1]; 
    while (p!=arr)
    {
        printf("%d ", *p); // In giá trị tại vị trí con trỏ p
        p--; // Di chuyển con trỏ về phía trước
    }
    printf("%d", *p); // In giá trị tại vị trí con trỏ p (phần tử đầu tiên của mảng)
}

void ex2(){
    int x = 10;
    const int *p = &x; // Con trỏ p trỏ đến một biến
    //*p = 20;  Sửa đổi giá trị thông qua con trỏ (bug vì con trỏ hằng chỉ read only)
    printf("Value of x: %d\n", *p); // In giá trị của biến

}


int main(int argc, char const *argv[])
{
    ex1(); // Gọi hàm ex1 để thực hiện in mảng
    printf("\n");
    
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
