/*
stactic kết hợp với biến global sẽ làm cho bộ nhớ cục bộ của nó sẽ không bị giải phóng khi hàm kết thúc.
và biến stactic chỉ có thể truy cập trong phạm vi hàm đó của file đó

Biến stactic kết hợp với biến toàn cục thì biến đó chỉ được sử dụng trong phạm vi của file đó thôi, kể
cả dùng extern thì nó cũng không được sử dụng ở file khác. Dùng để bảo về biến toàn cục không bị thay đổi
ở file khác.

có một công dụng khác của biến toàn cục kết hợp stactic là tránh file khác có tên biến giống với biến toàn cục
đó, tránh trường hợp gọi nhầm lẫn biến toàn cục với biến toàn cục ở file khác.

vì vậy nếu không có static thì không được định nghĩa 2 biến toàn cục cùng tên ở 2 file khác nhau. Mà phải thêm
static vào thì mới được định nghĩa 2 biến toàn cục cùng tên ở 2 file khác nhau.
*/