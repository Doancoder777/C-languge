/*
bit field có thể dùng để tiết kiệm bộ nhớ khi lưu trữ các giá
 trị boolean hoặc các giá trị có phạm vi nhỏ.
Ví dụ, nếu bạn có một cấu trúc với nhiều cờ boolean, 
bạn có thể sử dụng bit field để lưu trữ chúng trong một số 
nguyên duy nhất thay vì sử dụng nhiều biến boolean riêng biệt.
Dưới đây là một ví dụ về cách sử dụng bit field trong C:


ví dụ như lưu trữ thời gian

struct Time {
    unsigned int hours : 5;   // 0-23 (5 bits)
    unsigned int minutes : 6; // 0-59 (6 bits)
    unsigned int seconds : 6; // 0-59 (6 bits)
};

thay vì sử dụng 3 biến int riêng biệt (mỗi biến thường chiếm 4 bytes),
bạn có thể sử dụng bit field để lưu trữ tất cả trong một số nguyên duy nhất (4 bytes).


lưu ý khi sử dụng bit field:
1. Kích thước và căn chỉnh: Kích thước của một struct có bit field 
có thể khác nhau tùy thuộc vào trình biên dịch và kiến trúc hệ thống. 
Cần kiểm tra kích thước của struct để đảm bảo nó phù hợp với yêu cầu bộ nhớ.

2. các biến bit field trong struct khai báo phải là kiểu nguyên (int, unsigned int, v.v.).

3. bit field không áp dụng được cho con trỏ hoặc các kiểu dữ liệu phức tạp khác như
float, double, struct, union, v.v.

4. ta không thể lấy địa chỉ của một biến bit field. 
Vì khi ta thao tác với bit, nó không còn là 1 byte nữa mà là 1 bit,
nên không thể lấy địa chỉ của nó được.
*/