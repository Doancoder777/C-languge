#include <stdio.h>
#include <stdlib.h>

void nhapmang(int **a, int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }
}

void xuatmang(int **a, int row, int col)
{
    printf("\n");

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int row, col;
    scanf("%d %d", &row, &col);

    int **p = (int **)malloc(row * sizeof(int *));

    for (size_t i = 0; i < row; i++)
    {
        *(p + i) = (int *)malloc(col * sizeof(int));
    }

    nhapmang(p,row,col);
    xuatmang(p,row,col);

    for (size_t i = 0; i < row; i++)
    {
        free(*(p + i));
    }

    free(p);

    system("pause");
    return 0;
}
