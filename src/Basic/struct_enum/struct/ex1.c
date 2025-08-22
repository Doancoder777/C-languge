#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    float gpa;
};
// đây là kiểu khai bao tường minh
// khi khai báo ta viết struct student s1;
// khi sử dụng thì viết s1.name, s1.age, s1.gpa


typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;
// đây là kiểu khai báo không tường minh
// khi khai báo ta viết Student s1;
// nó sẽ không cần từ khóa struct khi sử dụng, giúp code ngắn gọn hơn

void ex1(){
    Student s1; // Khởi tạo biến s1 kiểu struct student
    strcpy(s1.name, "Nguyen Van A"); // Gán tên cho sinh viên
    // ta phải gán strcpy vì name là mảng ký tự, không thể gán trực tiếp bằng dấu "="
    s1.age = 20; // Gán tuổi cho sinh viên
    s1.gpa = 3.5; // Gán điểm trung bình cho sinh viên

    printf("address of struct %x", &s1); // In địa chỉ của biến s1
    printf("\naddress of name %x", &s1.name); 
    // từ đây ta rút ra kết luận địa chỉ của struct cũng chính là địa chỉ của trường đầu tiên trong struct
}

struct st{
    int index;
    char team;
};

void ex2(){

    printf("Size of struct st: %zu bytes\n", sizeof(struct st)); // In kích thước của struct st
    // Kích thước của struct st sẽ là 8 bytes (4 bytes cho int + 1 byte cho char + 3 bytes padding)
    // Padding được thêm vào để đảm bảo rằng các trường trong struct được căn chỉnh đúng theo
    // compiler, luôn ưu tiên ghi vào các byte có địa chỉ chia hết cho 4
    // Điều này giúp tăng hiệu suất truy cập bộ nhớ trên các kiến trúc máy tính

}

struct st2{
    char team;
    int index;
    double score;
} s3; // Khởi tạo biến s3 kiểu struct st2

void ex3(){
    printf("Size of struct st2: %zu bytes\n", sizeof(struct st2)); // In kích thước của struct st2
    // Kích thước của struct st2 sẽ là 16 bytes (1 byte cho char + 3 bytes padding + 4 bytes cho int + 8 bytes cho double)
    // Padding được thêm vào để đảm bảo rằng các trường trong struct được căn chỉnh đúng theo
    // compiler, luôn ưu tiên ghi vào các byte có địa chỉ chia hết cho 8
    // Điều này giúp tăng hiệu suất truy cập bộ nhớ trên các kiến trúc máy tính
}       

#pragma pack(push, 1) // Đặt cấu trúc với padding là 1 byte

struct st3{
    char team;
    int index;
    double score;
};

#pragma pack(pop) // Trả về cấu trúc padding mặc định

void ex4(){
    printf("Size of struct st3: %zu bytes\n", sizeof(struct st3)); // In kích thước của struct st3
    // Kích thước của struct st3 sẽ là 13 bytes (1 byte cho char + 4 bytes cho int + 8 bytes cho double)
    // Không có padding nào được thêm vào, vì ta đã đặt cấu trúc với padding là 1 byte
}


int main(int argc, char const *argv[])
{
    
    


    getchar(); // Đợi người dùng nhấn Enter trước khi kết thúc chương trình
    return 0;
}
