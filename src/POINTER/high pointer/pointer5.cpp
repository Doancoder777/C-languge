#include <stdio.h>

// pointer to pointers

int main() {
    
    int x = 5;
    int* p = &x;
    *p = 6;

    // int** q = &p;

    //or

    int *temp = p;
    int **q = &temp;
    

    // int*** r = &q;

    //or

    int **temp2 = q;
    int ***r = &temp2;


    
    printf("%d\n", *p);       // 6
    printf("%d\n", *q);       // 225
    printf("%d\n", *(*q));    // 6
    printf("%d\n", *(*r));    // 225
    printf("%d \n", *(r));    // address of Q
    printf("%d\n", *(*(*r))); // 6

    printf("Nhan Enter de thoat...");
    getchar();
    return 0;
}
