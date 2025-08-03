#include<stdio.h>
#include <time.h>

void delay(int seconds) {
    clock_t start_time = clock();
    while (clock() < start_time + seconds * CLOCKS_PER_SEC);
}   

void ood_even(){ 
    static int cnt = 0; // Biến đếm số lần lặp
    cnt = 1 - cnt;

    if(cnt == 0) {
        printf("Số lặp là số chẵn\n");
    } else {
        printf("Số lặp là số lẻ\n");
    }   
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        ood_even(); // Gọi hàm để kiểm tra số lặp
        delay(1); // Delay 1 giây
        
    }
 
    
    

    getc(stdin); // Wait for input to keep the console open
    return 0;
}
