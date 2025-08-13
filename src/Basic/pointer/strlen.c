#include<stdio.h>

char strlen(char s[]){
    int count = 0; // Biến đếm số ký tự
    char *p = s; // Con trỏ p trỏ đến chuỗi s
    while(*p != '\0'){ // Duyệt qua từng ký tự cho đến khi gặp ký tự kết thúc chuỗi
        count++; // Tăng biến đếm
        p++; // Di chuyển con trỏ đến ký tự tiếp theo
    }
    return count; // Trả về số ký tự trong chuỗi
}


int main(int argc, char const *argv[])
{
    char s[] = "Hello, World!"; // Khởi tạo chuỗi
    printf("Độ dài của chuỗi '%s' là: %d\n", s, strlen(s)); // In độ dài của chuỗi
    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0; // Kết thúc chương trình
}