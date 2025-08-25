#include <stdio.h>


int main()
{
    int a = 1000; //1000 to hex = 0x3E8
    printf("%02x \n", a);
    unsigned char *p = (unsigned char*)&a; // Chuyển đổi địa chỉ của x sang con trỏ unsigned char
    printf("%02x ",*p);  // 
    printf("%02x ",*(p+1));
    getchar();
    return 0;


    /*
    khi ghi nó sẽ ghi theo thứ tự little-endian, tức là byte thấp nhất sẽ được ghi trước, sau đó là byte cao hơn.
    Byte
    0: 0xE8 (thấp nhất)
    Byte 1: 0x03


    khi lấy ra từng byte của biến a, ta sẽ thấy rằng byte thấp nhất (0xE8) được in ra trước,
    sau đó là byte cao hơn (0x03), và cuối cùng là hai byte cao nhất (0x00 và 0x00).
    */
}