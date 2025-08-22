#include <stdio.h>
#include <string.h>

void ex1()
{
    int ngay = 1, thang = 1, nam = 2023;
    printf("%02d/%02d/%04d\n", ngay, thang, nam);
}

void ex2()
{
    int ngay = 1, thang = 1, nam = 2023;
    char str[11]; // Độ dài chuỗi là 10 ký tự + 1 ký tự null
    sprintf(str, "%02d/%02d/%04d", ngay, thang, nam);
    printf("Chuỗi ngày tháng: %s\n", str);

    /*
    ta có thể gom dữ liệu xuất ra vào một mảng chuổi bằng sprintf để gửi qua lại
    giữa các vi điêu khiển hoặc lưu trữ trong bộ nhớ.
    sprintf là hàm định dạng chuỗi, nó sẽ định dạng dữ liệu theo định dạng
    */
}

int main(int argc, char const *argv[])
{

    // ex1(); // Gọi hàm ex1 để in ngày tháng
    ex2(); // Gọi hàm ex2 để in ngày tháng dưới dạng chuỗi
    getchar();
    return 0;
}
