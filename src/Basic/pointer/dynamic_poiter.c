#include<stdio.h>
#include<stdlib.h>


// đây là truyền dạng tham trị
void cap_phat_1(int *p)
{
   p = calloc(10, sizeof(int)); // Cấp phát bộ nhớ cho mảng 10 phần tử
   printf("address of p: %p\n", (void*)p); // In địa chỉ của con trỏ p

}


void ex1(){
    int *pt;
    cap_phat_1(pt); // Gọi hàm để cấp phát bộ nhớ cho con trỏ pt
    *pt = 1;
    printf("Value at pt: %d\n", *pt); // In giá trị tại vị trí con trỏ pt
    printf("address of p: %p\n", (void*)pt); // In địa chỉ của con trỏ p sau khi cấp phát
}

/*
ex1() không chạy được vì lúc khởi tạo pt, nó được gán một địa chỉ rác, thì khi 
gọi hàm cap_phat_1(pt), nó chỉ copy địa chỉ rác đó vào tham số p của hàm cap_phat_1,
chứ không có khả năng thay đổi địa chỉ của con trỏ pt trong hàm ex1().
Sau khi thoát khỏi hàm cap_phat_1(), biến p được giải phóng và địa chỉ heap bị rò rỉ.
pt vẫn giữ địa chỉ rác ban đầu, nên khi truy cập hoặc sửa đổi giá trị *pt
sẽ dẫn đến lỗi truy cập bộ nhớ hoặc hành vi không xác định.
*/


// đây là truyền dạng tham trị
void cap_phat_2(int *p)
{
   p = calloc(10, sizeof(int)); // Cấp phát bộ nhớ cho mảng 10 phần tử
}


void ex2(){
    int a[20];
    int *pt = a; // Khởi tạo con trỏ pt trỏ đến mảng a
    cap_phat_2(pt); // Gọi hàm để cấp phát bộ nhớ cho con trỏ pt
    *pt = 1;
    printf("Value at pt: %d\n", *pt); // In giá trị tại vị trí con trỏ pt
}

/*
ex2() chạy được vì nó đọc ghi trên mảng a mà pt trỏ đến,
còn hàm cap_phat_2() không thay đổi địa chỉ của con trỏ pt trong hàm ex2().
Vì đây là truyền dạng tham trị nên pt và p hoàn toàn không liên quan gì đến nhau.
Hàm cap_phat_2() chỉ gây ra memory leak mà không có tác dụng gì khác.
*/


// đây là truyền dạng tham trị
void cap_phat_3(int *p)
{
   *p = 1;
}


void ex3(){
    int a[20];
    int *pt = a; // Khởi tạo con trỏ pt trỏ đến mảng a
    cap_phat_3(pt); // Gọi hàm để thay đổi giá trị tại địa chỉ pt trỏ đến
    printf("Value at pt: %d\n", *pt); // In giá trị tại vị trí con trỏ pt
}

/*
ex3() chạy hoàn hảo!
- Mảng a[20] được tạo trên stack với địa chỉ hợp lệ
- pt = a nghĩa là pt trỏ đến a[0] 
- cap_phat_3(pt) nhận bản copy địa chỉ của a[0]
- Trong cap_phat_3(): *p = 1 có nghĩa là ghi giá trị 1 vào địa chỉ mà p trỏ đến
- Vì p trỏ đến cùng địa chỉ với pt (a[0]), nên a[0] = 1
- Khi quay về ex3(), *pt sẽ in ra giá trị 1

Đây là ví dụ đúng về cách thay đổi GIÁ TRỊ tại địa chỉ mà con trỏ trỏ đến,
khác với việc thay đổi ĐỊA CHỈ của chính con trỏ.
*/


int * cap_phat_4(){
    int *p = calloc(10, sizeof(int)); // Cấp phát bộ nhớ cho mảng 10 phần tử
    if (p == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Thoát chương trình nếu cấp phát thất bại
    }
    return p; // Trả về địa chỉ đã cấp phát
}


void ex4(){
    int *pt = cap_phat_4();
    *pt = 1; // Ghi giá trị 1 vào vị trí mà con trỏ pt trỏ đến
    printf("Value at pt: %d\n", *pt); // In giá trị tại vị trí con trỏ pt
    
    free(pt); // Giải phóng bộ nhớ heap
    pt = NULL; // Tránh dangling pointer
}

/*
Khác với code trước, code này sửa lại thành hàm cấp phát có trả về địa chỉ đã cấp phát.
Khi khởi tạo con trỏ và gán nó bằng hàm cap_phat_4(),
thì con trỏ pt sẽ trỏ đến địa chỉ hợp lệ đã được cấp phát, 
tránh việc con trỏ trỏ đến địa chỉ rác.

Kết quả là con trỏ pt nhận được địa chỉ hợp lệ đã cấp phát từ hàm.
Biến p sau khi thoát khỏi hàm cap_phat_4() sẽ được giải phóng, nhưng
vùng nhớ heap và địa chỉ vùng nhớ heap sẽ vẫn tồn tại cho tới khi 
gọi free(pt) hoặc chương trình kết thúc.
*/


void cap_phat_5(int **p)
{
    *p = calloc(10, sizeof(int));
    if (*p == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    printf("address of p: %p\n", (void*)*p); 
}



//https://drive.google.com/file/d/14Pv9sp_3IZJPbdj-DV_pp54y30LFFcHj/view?usp=sharing
void ex5(){
    int *pt;
    cap_phat_5(&pt); // Gọi hàm để cấp phát bộ nhớ cho con trỏ pt
    *pt = 1; // Ghi giá trị 1 vào vị trí mà con trỏ pt trỏ đến
    printf("Value at pt: %d\n", *pt); // In giá trị tại vị trí con trỏ pt
    printf("address of p: %p\n", (void*)pt); // In địa chỉ của con trỏ p sau khi cấp phát
    
    free(pt); // Giải phóng bộ nhớ heap
    pt = NULL; // Tránh dangling pointer
}


/*
ex5() là cách ĐÚNG để cấp phát bộ nhớ thông qua hàm!
- Sử dụng con trỏ đến con trỏ (int **p) để có thể thay đổi địa chỉ của pt
- Truyền &pt (địa chỉ của pt) thay vì giá trị của pt
- Trong cap_phat_5(): *p = calloc(...) thay đổi TRỰC TIẾP giá trị của pt
- Kết quả: pt nhận được địa chỉ hợp lệ từ heap
- Khác với ex1(): ở đây pt THỰC SỰ được thay đổi, không còn chứa địa chỉ rác

Cách hoạt động:
1. cap_phat_5(&pt) - truyền địa chỉ của pt (ví dụ: 0x7000)
2. p nhận 0x7000 (địa chỉ nơi pt được lưu trữ)
3. *p = calloc(...) ghi địa chỉ heap vào vị trí 0x7000 (tức là vào pt)
4. Khi về ex5(), pt đã trỏ đến vùng nhớ hợp lệ trên heap

Đây là giải pháp cho vấn đề ở ex1() - thay đổi ĐỊA CHỈ của con trỏ 
thông qua tham số hàm bằng cách dùng con trỏ đến con trỏ.
*/


int main(int argc, char const *argv[])
{
    ex1();
    // ex4();
    
    getchar();
    return 0;
}