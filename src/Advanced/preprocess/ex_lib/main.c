#include<stdio.h>  // thư viện chuẩn của C thì dùng dấu ngoặc nhọn
#include "array.h" // thư viện do ta tự viết thì dùng dấu ngoặc kép
// #include "array.h"
// #include "array.h"

/*
    khi để trong dấu ngoặc kép thì trình biên dịch sẽ tìm file thư viện
    trong thư mục hiện hành trước, nếu không tìm thấy mới tìm trong các
    thư mục chuẩn của hệ thống

    khi để trong dấu ngoặc nhọn thì trình biên dịch sẽ tìm file thư viện
    trong các thư mục chuẩn của hệ thống luôn
*/

/*
    file thứ viện ta có thể include nhiều lần trong một file nhưng
    để tránh việc khai báo lại nhiều làm tốn thời gian biên dịch và bộ nhớ
    ta nên dùng chỉ thị tiền xử lý #ifndef, #define, #endif để bảo vệ file
    thư viện khỏi việc khai báo lại nhiều lần
*/

void ex1() {
    // int n;
    // scanf("%d", &n);
    // trong file thư viện array.h is_prime được khai báo với
    // từ khóa static nên chỉ có thể sử dụng trong file array.c
    // do đó ta không thể gọi hàm is_prime ở đây
    // nếu gọi sẽ bị lỗi liên kết (linker error)
    // if(is_prime(n)) {
    //     printf("%d is prime\n", n);
    // } else {
    //     printf("%d is not prime\n", n);
    // }
}

void ex2() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    input_array(arr, size);
    output_array(arr, size);
    // output_array_primes(arr, size);
}

int main() {

    // ex1(); // bị lỗi liên kết (linker error)
    ex2();
    getchar();
    return 0;
}
