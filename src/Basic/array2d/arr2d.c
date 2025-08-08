#include<stdio.h>

#define SENSOR_NUMBER 10
#define DAYS 31

int nhietdocambien[SENSOR_NUMBER][DAYS];


void newknowledge()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


    printf("%d\n", a[0][0]); // 1
    printf("%d\n", &a[0][0]); // address of a[0][0]
    printf("%d\n", a[0]); // address of the first row (a[0])

    /*
    nếu ta chỉ in a[hàng] mà không truyền vào chỉ số cột thì nó sẽ in ra địa chỉ đầu tiền của hàng đó.
    */


    // ứng dụng

    char eror_log[3][30] = {
        {"Error 1: File not found"},
        {"Error 2: Access denied"},
        {"Error 3: Disk full"}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", eror_log[i]); // in ra từng dòng lỗi
    }

    /* ta có thể in từng loại lỗi mà cần phải truyền vào chỉ số cột 
    */
}

void ungdungluutrunhietdocambien(){

    /*
    thay vì sư dụng mảng 1 chiều để lưu trữ nhiệt độ của từng cảm biến,
    ta phải khai báo n mảng 1 chiều với n là số cảm biến.
    và tên của các mảng này sẽ là tên của cảm biến giống nhau có đánh số thứ tự.

    giả sử ta có 10 cảm biến nhiệt độ, mỗi cảm biến sẽ lưu trữ nhiệt độ trong 31 ngày,
    nhưng muốn tăng lên 100 cảm biến thì ta phải khai báo 100 mảng 1 chiều,
    và mỗi mảng sẽ có 31 phần tử.

    thì ta có thể sử dụng mảng 2 chiều để lưu trữ nhiệt độ của các cảm biến.
    mảng 2 chiều sẽ có số hàng là số cảm biến và số cột là số ngày.
    thì mọi thứ sẽ trở nên đơn giản hơn rất nhiều.

    lu
    */
    
}

void nhapdulieu(int sensor_index, int day, int value)
{
    nhietdocambien[sensor_index - 1][day - 1] = value;
}

int showdukieu(int sensor_index, int day)
{
    return nhietdocambien[sensor_index - 1][day - 1];
}

int main(int argc, char const *argv[])
{
    // newknowledge();
    nhapdulieu(1, 1, 25);
    int value = showdukieu(1, 1);
    printf("Temperature for sensor 1 on day 1: %d\n", value);
    
    getchar();
    return 0;
}
