/*
để định nghĩa 1 hằng số không thay đổi ta có thể sử dụng const hoặc macro

câu hỏi đặt ra là const và macro khác nhau như thế nào?

- khác nhau ở chỗ là macro đơn giản là thay thế những khối lệnh phía sau vào những khối lệnh phía trước
chứ hoàn toàn không có khả năng check hoặc kiểm tra lỗi gì cả

- hằng thi phải khai báo biến, tức là nó vẫn phải sử dụng bộ nhớ trung gian để lưu trữ giá trị của nó
còn macro thì không cần, nó chỉ đơn giản là thay thế, vị vậy macro sẽ tiêu tốn bộ nhớ hơn, nhưng
ngược lại thì macro không có khả năng kiểm tra lỗi, tức là nếu ta viết macro sai thì nó sẽ không báo lỗi

- ngoài ra macro còn có thể sử dụng để thay thế những đoạn code phức tạp hơn, ví dụ như hàm. Còn
const thì không thể làm được điều này


*/