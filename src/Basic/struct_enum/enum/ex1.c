#include<stdio.h>
#include<stdlib.h>

/*
Enum là một kiểu dữ liệu trong C, dùng để gán tên cho các hằng số. Được sử dụng
để kiểm soát hằng số không muốn bị nhầm lẫn trong quá trình sử dụng.
Enum được sử dụng để định nghĩa các mã lỗi, các mã trả về và các hằng cần kiểm soát.
*/


enum day_of_week {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void ex1(){
    // enum day_of_week today = WEDNESDAY; // Khởi tạo biến today kiểu enum day_of_week
    // printf("Today is day number: %d\n", today); // In ra số thứ tự của ngày hôm nay

    printf("monday: %d\n", MONDAY);
}

typedef enum error{
    STACK_OVERFLOW = 1,
    MEMORY_LEAK,
    PARAM_INVALID,
    OK
};
/*
ENUM DÙNG để định nghĩa các mã lỗi, giúp dễ dàng quản lý và kiểm soát các hằng số.
*/

// Example khai báo tường minh
enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

void example_enum_explicit() {
    enum week day;
    day = Wed;
    printf("Chỉ số của Wed là %d\n", day);

    // Duyệt tất cả các chỉ số của enum week
    for (int i = Mon; i <= Sun; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Example khai báo không tường minh
typedef enum {Mon2, Tue2, Wed2, Thur2, Fri2, Sat2, Sun2} week_t;

void example_enum_typedef() {
    week_t day;
    day = Mon2; printf("Giá trị của Mon là %d\n", day);
    day = Tue2; printf("Giá trị của Tue là %d\n", day);
    day = Wed2; printf("Giá trị của Wed là %d\n", day);
    day = Thur2; printf("Giá trị của Thur là %d\n", day);
    day = Fri2; printf("Giá trị của Fri là %d\n", day);
    day = Sat2; printf("Giá trị của Sat là %d\n", day);
    day = Sun2; printf("Giá trị của Sun là %d\n", day);
}

int main(int argc, char const *argv[])
{  
    ex1(); // Gọi hàm ex1() để thực hiện ví dụ với enum

    example_enum_explicit();
    example_enum_typedef();

    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
