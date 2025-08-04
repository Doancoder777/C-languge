#include<stdio.h>

int sum(int a,int b){
    return a+b;
}

int main(int argc, char const *argv[])
{

    int (*p)(int,int);

    p = sum;

    // int c = (*p)(3,5);

    // printf("%d",c);

    printf("địa chỉ của hàm sum là %d\n",&sum);
    printf("địa chỉ của hàm sum là %d\n",sum);
    printf("địa chỉ con trỏ hàm p lưu là %d\n",*p);
    printf("địa chỉ của con trỏ p là %d",p);



    getchar();
    return 0;
}
