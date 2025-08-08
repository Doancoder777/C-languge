/*
có 2 cách khai báo biến chuỗi trong C:
1. Sử dụng mảng ký tự (char array)
2. Sử dụng con trỏ đến ký tự (character pointer)

Cách 1: Sử dụng mảng ký tự
nó sẽ lưu vào trong vùng nhớ stack và có thể sửa được, nên dùng cách này

Cách 2: Sử dụng con trỏ đến ký tự
nó sẽ lưu vào trong vùng nhớ heap và không thể sửa được, nên dùng cách này khi cần lưu trữ chuỗi hằng (string literal),
muốn sửa chỉ có một cách duy nhất là gán nó cho một chuỗi khác lưu trong vùng nhớ hằng. Điều này có thể
làm lãng phí bộ nhớ nếu không quản lý tốt và gây lỗi nếu cố gắng sửa    .
*/