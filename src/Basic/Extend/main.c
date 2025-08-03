// main.c

#include<stdio.h>

void thaydoi_bientoancuc(); // Khai báo prototype của hàm ở file khác

int bientoancuc = 10; // Biến toàn cục

int cong2so(int a, int b)
{
    // Hàm cộng hai số  
    bientoancuc = 20; // Thay đổi giá trị biến toàn cục
    return a + b;
}

int main(int argc, char const *argv[])
{
    int a = 5; // Biến cục bộ
    int b = 10; // Biến cục bộ  
    int ketqua = cong2so(a, b); // Gọi hàm cộng hai số
    printf("Kết quả cộng: %d\n", ketqua);
    
    thaydoi_bientoancuc(); // Gọi hàm thay đổi biến toàn cục
    printf("Giá trị biến toàn cục sau khi thay đổi: %d\n", bientoancuc);

    getc(stdin); // Wait for input to keep the console open
    return 0;
}

// run code gõ gcc main.c lic.c -o program.exe
