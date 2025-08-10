#include<stdio.h>

void ex1(){
    unsigned char arr[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};
    unsigned char * p; // Khởi tạo con trỏ p trỏ đến mảng arr
    p = &arr[0]; // Gán địa chỉ của mảng arr cho con trỏ p
    *p = 0xAB; // Gán giá trị mới cho phần tử đầu tiên của mảng arr (hợp lệ)
    printf("%X\n", *p); // In giá trị tại địa chỉ mà p trỏ đến


    printf("Address of arr[0]: %p\n", (void*)&arr[0]); // In địa chỉ của phần tử đầu tiên của mảng arr
    printf("Address of arr: %p\n", (void*)arr); // In địa chỉ của mảng arr
    printf("Address stored in p: %p\n", (void*)p); // In địa chỉ mà p đang trỏ đến
}


void ex2(){
    unsigned char arr[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};
    // int *p = &arr[0]; // không nên dùng cách này để trỏ 4 byte đến mảng 1 byte
    // printf("%d\n", *p); // In giá trị tại địa chỉ mà p trỏ đến (sai, vì p không trỏ đến địa chỉ hợp lệ)
}


void ex3(){
    
    int x = 1000;     //1000 to hex = 0x3E8
    unsigned char *p = (unsigned char*)&x; // Chuyển đổi địa chỉ của x sang con trỏ unsigned char
    printf("%02x ",*p);
    printf("%02x ",*(p+1));
    printf("%02x ",*(p+2));
    printf("%02x ",*(p+3));
    
    /*
    the result will be:
    e8 03 00 00

    đặc tính luu dữ liệu của C là lưu dữ liệu theo thứ tự little-endian,
    tức là byte thấp nhất sẽ được lưu trước, sau đó là byte cao hơn.

    Byte 0: 0xE8 (thấp nhất)
    Byte 1: 0x03
    Byte 2: 0x00
    Byte 3: 0x00 (cao nhất)

    vì vậy, khi in ra từng byte của biến x, ta sẽ thấy rằng byte thấp nhất (0xE8) được in ra trước,
    sau đó là byte cao hơn (0x03), và cuối cùng là hai byte
    cao nhất (0x00 và 0x00).
    Điều này là do cách mà C lưu trữ dữ liệu trong bộ nhớ.

    đó là lý do ta thấy kết quả ngược so với dạng hex thông thường.



    khi đọc từ ram lên nó sẽ đọc từ phải sang trái,
    */

}


void ex4(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr; // Khởi tạo con trỏ p trỏ đến mảng arr

    printf("value of address arr stored in p: %d\n", *p); // In giá trị tại địa chỉ mà p trỏ đến (phần tử đầu tiên của mảng arr)

    p+=1; // Di chuyển con trỏ p đến phần tử tiếp theo trong mảng arr
    printf("value of address arr stored in p: %d\n", *p); // In giá trị tại địa chỉ mà p trỏ đến (phần tử thứ hai của mảng arr)
}


void ex5(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int *p = arr; p < arr + sizeof(arr)/sizeof(arr[0]); p++) {
        printf("value of address arr stored in p: %d\n", *p); // In giá trị tại địa chỉ mà p trỏ đến
        printf("Address stored in p: %d\n", (void*)p); // In địa chỉ mà p đang trỏ đến
    }   
    printf("\n");
}

void ex6(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    unsigned char *p;
    for(p = (unsigned char*)arr; p < (unsigned char*)arr + sizeof(arr); p++) {
        printf("%02x ", *p); // In giá trị từng byte của mảng arr
    }
    printf("\n");
}


void ex7(){
    // con trở, trở tới mảng có thể truy cập phần từ bằng index dấu ngoặc vuông
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr; // Khởi tạo con trỏ p trỏ đến mảng arr
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("value of address arr stored in p: %d\n", p[i]); // In giá trị tại địa chỉ mà p trỏ đến (phần tử thứ i của mảng arr)
        printf("Address stored in p: %p\n", (void*)(p + i)); // In địa chỉ mà p đang trỏ đến
    }
}
void ex8(){
    // con trở, trở tới mảng có thể truy cập phần từ bằng index dấu ngoặc vuông
    unsigned char arr[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};
    unsigned char *p = arr; // Khởi tạo con trỏ p trỏ đến mảng arr
    *p += 10;
    printf("value of address arr stored in p: %02x\n", *p); // In giá trị tại địa chỉ mà p trỏ đến (phần tử đầu tiên của mảng arr)

}

void changeValue(int *p){
    *p = 100; // Thay đổi giá trị tại địa chỉ mà p trỏ đến
}

void ex9(){
    int x = 10;
    printf("Before change: %d\n", x); // In giá trị ban đầu của x
    changeValue(&x); // Gọi hàm để thay đổi giá trị của x thông qua con trỏ
    printf("After change: %d\n", x); // In giá trị sau khi thay đổi
}


int main(int argc, char const *argv[])
{
    


    // ex1();
    // ex2();
    // ex3();
    // ex4();
    // ex5();
    // ex6();
    // ex7();
    // ex8();
    // ex9();


    

    
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
