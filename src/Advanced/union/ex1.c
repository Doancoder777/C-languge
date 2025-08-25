#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[20];
    int age;
    int id;
}student_t;

typedef struct
{
    char name[20];
    int age;
    int id;
} teacher_t;


typedef union 
{
    student_t student;
    teacher_t teacher;
} person_t;


int main(int argc, char const *argv[])
{
    person_t p;
    strcpy(p.student.name, "Nguyen Van A");
    p.student.age = 20;
    p.student.id = 12345;
    printf("Student: %s - %d - %d\n", p.student.name, p.student.age, p.student.id);


    strcpy(p.teacher.name, "Tran Thi B");
    p.teacher.age = 30;
    p.teacher.id = 54321;
    printf("Teacher: %s - %d - %d\n", p.teacher.name, p.teacher.age, p.teacher.id);

    
    /*
    Lưu ý: Khi sử dụng union, chỉ có thể sử dụng một thành viên tại một thời điểm.
    Trong ví dụ trên, khi gán giá trị cho thành viên teacher,
    giá trị của thành viên student sẽ bị ghi đè.
    Ở đây, khi in ra thông tin của student sau khi đã gán giá trị cho teacher,
    ta sẽ thấy thông tin của student bị thay đổi.
    Ở ví dụ này, kích thước của union sẽ là kích thước của thành viên lớn nhất,
    tức là kích thước của student hoặc teacher, tùy thuộc vào hệ thống.


    union sẽ chiếm ít bộ nhớ hơn struct trong trường hợp này. Những thứ union có
    struct đều có, trừ cái cơ chế tiết kiệm bộ nhớ.
    */

    getchar();
    return 0;
}
