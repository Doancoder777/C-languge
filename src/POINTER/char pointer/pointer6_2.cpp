#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    // Arrays and pointers are different types that are used in a similar manner.
   char c[6] = "hello";

//    printf("%c \n",c[0]);
//    printf("%c \n",c[1]);

   char *p = &c[0];
//    printf("%c \n",p[0]);
//    printf("%c \n",*(p+1));
//    printf("%c \n",*(p+2));

    printf("%c",*(c+1));


    system("pause");
    return 0;
}
