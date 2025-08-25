#include<stdio.h>
#include<string.h>

typedef struct {
    unsigned hours : 5;   // 0-23 (5 bits)
    unsigned int minutes : 6; // 0-59 (6 bits)
    unsigned int seconds : 6; // 0-59 (6 bits)
} Time;


typedef struct{
    unsigned int wifi_connected : 1; // 1 bit
    unsigned int wifi_disconnected : 1; // 1 bit
    unsigned int wifi_scanning : 1; // 1 bit
} WifiStatus;

// khi khai báo phạm vi chặc chẽ vậy ta không thể gán giá trị vượt quá phạm vi được

void ex1(){
    Time t;
    memset(&t, 0, sizeof(t)); // Khởi tạo tất cả các bit về 0

    t.hours = 10;   // Hợp lệ
    t.minutes = 30; // Hợp lệ
    t.seconds = 45; // Hợp lệ

    printf("Time: %02u:%02u:%02u\n", t.hours, t.minutes, t.seconds);

    // Thử gán giá trị vượt quá phạm vi
    t.hours = 32;   // Vượt quá phạm vi (5 bits chỉ có thể lưu trữ từ 0-31)
    t.minutes = 70; // Vượt quá phạm vi (6 bits chỉ có thể lưu trữ từ 0-63)
    t.seconds = 80; // Vượt quá phạm vi (6 bits chỉ có thể lưu trữ từ 0-63)

    printf("After overflow attempt:\n");
    printf("Time: %02u:%02u:%02u\n", t.hours, t.minutes, t.seconds);

    printf("Size of Time struct: %zu bytes\n", sizeof(t));
}


void ex2(){
    WifiStatus status;
    memset(&status, 0, sizeof(status)); // Khởi tạo tất cả các bit về 0

    status.wifi_connected = 1; // Kết nối WiFi
    printf("WiFi Connected: %u\n", status.wifi_connected);
    printf("WiFi Disconnected: %u\n", status.wifi_disconnected);
    printf("WiFi Scanning: %u\n", status.wifi_scanning);

    // Thử gán giá trị vượt quá phạm vi
    status.wifi_connected = 2; // Vượt quá phạm vi (1 bit chỉ có thể lưu trữ 0 hoặc 1)
    printf("After overflow attempt:\n");
    printf("WiFi Connected: %u\n", status.wifi_connected);
    printf("WiFi Disconnected: %u\n", status.wifi_disconnected);
    printf("WiFi Scanning: %u\n", status.wifi_scanning);

    printf("Size of WifiStatus struct: %zu bytes\n", sizeof(status));
}

int main(int argc, char const *argv[])
{
    ex1();
    

    getchar();
    return 0;
}
