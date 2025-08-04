#include <stdio.h>
#include<stdlib.h>

int main() {
    char C[4];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    // C[4] = '\0';
    printf("%s\n", C);

    system("pause");

        return 0;

}



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char C[20];

//     // In giá trị thập phân của các phần tử trong mảng trước khi gán giá trị
//     printf("Giá trị ban đầu của các phần tử trong mảng C:\n");
//     for (int i = 0; i < 20; i++) {
//         printf("C[%d] = %d\n", i, C[i]);
//     }

//     // Gán các giá trị cụ thể vào một số phần tử của mảng
//     C[0] = 'J';
//     C[1] = 'O';
//     C[2] = 'H';
//     C[3] = 'N';

//     // In chuỗi
//     printf("\nChuỗi C: %s\n", C);

//     system("pause");

//     return 0;
// }

