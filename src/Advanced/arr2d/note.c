/*
khi truyền mảng 2 chiều vào hàm ta phải khai truyền kích thước cột để
nó biết cần nhảy bao nhiêu ô nhớ để truy cập vào hàng tiếp theo

các cách khai báo mảng 2 chiều gán sẵn;

int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
int a[2][3] = {1, 2, 3, 4, 5, 6}; // Cách này sẽ tự động hiểu là mảng 2 chiều
int a[2][3] = {{1, 2, 3}, {4, 5}}; // Cách này sẽ tự động hiểu là mảng 2 chiều
char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
int a[2][3] = {{'a', 'b', 'c'}, {'d', 'e'}}; // Cách này sẽ tự động hiểu là mảng 2 chiều
char a[2][3] = {'a', 'b', 'c', 'd', 'e', 'f'}; // Cách này sẽ tự động hiểu là mảng 2 chiều

char ten[50][50] = {
    "Nguyen Van A",
    "Tran Thi B",
    "Le Van C"
};
*/