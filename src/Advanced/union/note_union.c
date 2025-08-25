/*
union là một kiểu dữ liệu đặc biệt trong C, tương tự như struct, nhưng tất cả các 
thành viên của union chia sẻ cùng một vùng nhớ. 
Điều này có nghĩa là tại bất kỳ thời điểm nào, 
chỉ có thể sử dụng một thành viên của union, 
và kích thước của union sẽ bằng kích thước của thành viên lớn nhất.



vị dụ cần một cấu trúc để lưu:

char name[20]; // Tên
int age;       // Tuổi
int id;        // Mã số



struct sẽ chiếm 20 + 4 + 4 = 28 bytes (giả sử int là 4 bytes nếu không có padding)
union sẽ chiếm 20 bytes (kích thước của thành viên lớn nhất là name)






*/