#include <stdio.h>

int *find_max(int *a, int *b)
{
    return (*a > *b) ? a : b; // Trả về địa chỉ của giá trị lớn hơn
}

void ex1(){
    int x = 10, y = 20;
    int *max_ptr = find_max(&x, &y); // Gọi hàm để tìm địa chỉ của giá trị lớn hơn
    printf("Max value: %d\n", *max_ptr); // In giá trị tại địa chỉ mà con trỏ max_ptr trỏ đến
}

//----------------------------------------------------------------------------------------

int * find_max_bug(int a, int b){
    return  (a > b) ? &a : &b; // Trả về địa chỉ của giá trị lớn hơn
   
}

void ex2(){
    int x = 10, y = 20;
    int *max_ptr = find_max_bug(x, y); // Gọi hàm để tìm địa chỉ của giá trị lớn hơn
    printf("Max value: %d\n", *max_ptr); // In giá trị tại địa chỉ mà con trỏ max_ptr trỏ đến

    /*
    trong trường hợp này, hàm find_max_bug trả về địa chỉ của biến a hoặc b,
    nhưng vì a và b là biến cục bộ của hàm, nên khi hàm kết thúc, địa chỉ của chúng không còn hợp lệ nữa.
    đẫn tới việc ta không in ra giá trị tại địa chỉ của a hoặc b trong bộ nhớ stack của hàm find_max_bug nx.
    */
}

//----------------------------------------------------------------------------------------

int * find_max_fix(int *a, int *b){
    return  (*a > *b) ? a : b; // Trả về địa chỉ của giá trị lớn hơn
}

void ex3(){
    int x = 10, y = 20;
    int *max_ptr = find_max_fix(&x, &y); // Gọi hàm để tìm địa chỉ của giá trị lớn hơn
    printf("Max value: %d\n", *max_ptr); // In giá trị tại địa chỉ mà con trỏ max_ptr trỏ đến

    /*
    vì ta đã truyền dạng tham chiếu nến biến x và y này thuộc phạm vi của hàm ex3, nên
    sau khi thoát hàm find_max_fix thì giá trị của x và y vẫn được giữ nguyên. Cho tới khi kết thúc hàm 
    ex3 thì giá trị của x và y mới bị giải phóng.
    */

}

int main(int argc, char const *argv[])
{
    // ex1();
    // ex2();
    ex3();
   

    getchar(); // Đợi người dùng nhấn phím trước khi kết thúc chương trình
    return 0;
}
