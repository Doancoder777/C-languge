#include<stdio.h>
#include<string.h>

typedef enum {
    STACK_OVERFLOW = 1,
    MEMORY_LEAK,
    PARAM_INVALID,
    OK
}stautus_t; // _t khi sử dụng stuct, enum, typedef để biểu thị kiểu dữ liệu

stautus_t tinhsodiemthi(int diemthi) {
    if (diemthi < 0 || diemthi > 10) {
        return PARAM_INVALID; // Trả về mã lỗi nếu điểm thi không hợp lệ
    } else if (diemthi >= 5) {
        return OK; // Trả về OK nếu điểm thi hợp lệ
    } else {
        return MEMORY_LEAK; // Trả về mã lỗi khác nếu điểm thi không đạt
    }
}

void ex2(int diemthi) {
    
    stautus_t result = tinhsodiemthi(diemthi); // Gọi hàm để tính điểm thi

    switch (result) {
        case OK:
            printf("Điểm thi hợp lệ.\n");
            break;
        case PARAM_INVALID:
            printf("Điểm thi không hợp lệ.\n");
            break;
        case MEMORY_LEAK:
            printf("Điểm thi không đạt.\n");
            break;
        default:
            printf("Lỗi không xác định.\n");
    }
}




int main(int argc, char const *argv[])
{
    
    while (1)
    {
        int diemthi;
        scanf("%d", &diemthi);
        if (diemthi == -1) {
            break; // Thoát vòng lặp nếu người dùng nhập -1
        }
        ex2(diemthi); // Gọi hàm ex2() để thực hiện ví dụ với enum
        printf("Nhập điểm thi tiếp theo (hoặc -1 để thoát): ");
    }
    

    getchar(); // Đợi người dùng nhấn Enter trước khi kết thúc chương trình
    return 0;
}
