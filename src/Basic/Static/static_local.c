#include<stdio.h>


void thaydoiso(void){
    static int a = 0; // Biến tĩnh, chỉ có thể truy cập trong file này
    a++;
    printf("Giá trị của biến tĩnh a: %d\n", a);
    /*
    biến tĩnh khi có từ khóa stacic thì bộ nhớ cục bộ của nó sẽ không bị giải phóng khi hàm kết thúc.
    Biến tĩnh sẽ giữ nguyên giá trị của nó giữa các lần gọi hàm.

    biến toàn cục tạo ra để sử dụng trong toàn bộ chương trình, còn biến stacic kết hợp với biến cục bộ
    thì nó chỉ sử dụng được ở hàm đó thôi. Nó không được sử dụng ngoài phạm vi của hàm.
    */
}


int main(int argc, char const *argv[])
{
    thaydoiso(); // Gọi hàm để thay đổi giá trị biến tĩnh
    thaydoiso(); // Gọi lại hàm để thấy giá trị biến tĩnh được
    thaydoiso(); // Gọi lại hàm để thấy giá trị biến tĩnh được cập nhật
    thaydoiso(); // Gọi lại hàm để thấy giá trị biến tĩnh được cập nhật
    thaydoiso(); // Gọi lại hàm để thấy giá trị biến tĩnh được cập nhật
    
    getc(stdin); // Wait for input to keep the console open
    return 0;
}
