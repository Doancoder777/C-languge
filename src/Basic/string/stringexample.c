#include<stdio.h>
#include<string.h>

void string_coppy(){
    //coppy thay thế chuỗi
    char str1[20] = "Hello hahaha";
    char str2[20] = "World";
    strcpy(str1, str2); // str1 sẽ chứa "World"
    printf("str1 after copy: %s\n", str1);
    /*
    hàm mày mặc định nó sẽ coppy và ghi đè lên chuỗi tại vị trí đầu tiên của str1,
    nếu str1 có độ dài nhỏ hơn str2 thì sẽ bị lỗi tràn bộ nhớ, nên cần đảm bảo rằng str1 đủ lớn để chứa str2.

    lý do nó chỉ in từ world là chuỗi khi in nó kết thúc bằng ký tự null '\0',
    nên khi coppy nó sẽ coppy đến khi gặp ký tự null '\0' của str2,
    nếu str1 không đủ lớn thì sẽ không có ký tự null '\0' để kết thúc chuỗi,
    dẫn đến việc in ra các ký tự không mong muốn sau chuỗi "World".
    */

    /* không thể coppy chuỗi vào trong chuỗi hằng, nó sẽ lỗi ngay lập tức, cho nên 
    khuyến khích sử dụng mảng ký tự để lưu trữ chuỗi thay vì chuỗi hằng.
    */ 

    // có thể coppy 1 đoạn chuỗi từ str2 vào str1
    char str4[30] = "Hutech";
    char str5[] = ".edu.vn";
    strcpy(&str4[6], str5);
    printf("str4 after strncpy: %s\n", str4);

}

void str_length(){
    //độ dài chuỗi
    char str1[20] = "Hello";
    char str2[20] = "World";
    int len1 = strlen(str1); // len1 sẽ là 5
    int len2 = strlen(str2); // len2 sẽ là 5
    printf("Length of str1: %d\n", len1);
    printf("Length of str2: %d\n", len2);
    /*
    hàm này sẽ tính độ dài của chuỗi, không tính ký tự null '\0' ở cuối chuỗi.
    */
}

void str_compare(){
    //so sánh chuỗi
    char str1[20] = "Hello";
    char str2[20] = "World";
    int cmp = strcmp(str1, str2); // cmp sẽ là một số âm vì "Hello" < "World"
    if (cmp < 0) {
        printf("str1 is less than str2\n");
    } else if (cmp > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }
    /*
    hàm này sẽ so sánh hai chuỗi theo thứ tự từ điển,
    nếu str1 < str2 thì trả về số âm, nếu str1 > str2 thì trả về số dương, nếu bằng thì trả về 0.
    */
}


void str_concat(){
    //nối chuỗi
    char str1[20] = "Hello";
    char str2[20] = " World";
    strcat(str1, str2); // str1 sẽ chứa "Hello World"
    printf("str1 after concatenation: %s\n", str1);
    /*
    hàm này sẽ nối chuỗi str2 vào cuối chuỗi str1,
    cần đảm bảo rằng str1 đủ lớn để chứa cả hai chuỗi.
    */
}


void str_find(){
    //tìm kiếm chuỗi con
    char str1[20] = "Hello World";
    char *ptr = strstr(str1, "World"); // ptr sẽ trỏ đến vị trí bắt đầu của "World" trong str1
    if (ptr != NULL) {
        printf("Found 'World' in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("'World' not found in str1\n");
    }
    /*
    hàm này sẽ tìm kiếm chuỗi con trong chuỗi lớn,
    nếu tìm thấy thì trả về con trỏ đến vị trí bắt đầu của chuỗi con, nếu không thì trả về NULL.
    */
}


void str_find2(){
    char s[] = "Hello World";
    char kitucantim[2];
    gets(kitucantim); // nhập ký tự cần tìm
    char *p = strstr(s, kitucantim); // tìm kiếm ký tự đầu tiên
    if (p != NULL) {
        printf("Found '%c' in string at position: %ld\n", kitucantim, p - s);
    } else {
        printf("Character '%c' not found in string\n", kitucantim);
    } 

}


void str_tokenize(){
    //tách chuỗi
    char str1[50] = "Hello, World, C programming";
    char *token = strtok(str1, ", "); // tách theo dấu phẩy và khoảng trắng
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ", ");
    }
    /*
    hàm này sẽ tách chuỗi thành các token dựa trên ký tự phân tách,
    cần lưu ý rằng hàm này sẽ thay đổi chuỗi gốc bằng cách thay thế ký tự phân tách bằng ký tự null '\0'.
    */
}

void remove_char(char s1[], int index)
{
    int i;
    for (i = index; s1[i] < strlen(s1); i++) {
        s1[i] = s1[i + 1];
    }
    

}

void deletespace()
{
    char str[] = "ho dang huu doan";
    char *p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            remove_char(str, p - str);
        } else {
            p++;
        }
    }
    printf("String after removing spaces: %s\n", str);
}






void xoakhoangtrang(){
    char str[] = "ho dang huu doan";
    //de toi tu lam
    for(int i = 0;i<strlen(str);++i){
        if(str[i]==' '){
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            }
            i--; // Giảm i để kiểm tra lại vị trí hiện tại
        }
    }
    printf("String after removing spaces: %s\n", str);
}


int main(int argc, char const *argv[])
{
    // string_coppy();
    // str_find2();
    xoakhoangtrang();
    printf("Press Enter to continue...\n");

    
    getchar(); 
    return 0;
}
