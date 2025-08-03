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
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int row, col;
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &row, &col);
    int **p = (int **)calloc(row, sizeof(int *));

    for (size_t i = 0; i < row; i++)
    {
        *(p + i) = (int *)calloc(col, sizeof(int));
    }

    nhapmang(p, row, col);
    xuatmang(p, row, col);

    // Thay đổi kích thước ma trận
    int new_row, new_col;
    printf("Nhap so hang moi va so cot moi: ");
    scanf("%d%d", &new_row, &new_col);

    p = (int **)realloc(p, new_row * sizeof(int *));
    for (size_t i = 0; i < new_row; i++)
    {
        if (i < row)
        {
            *(p + i) = (int *)realloc(*(p + i), new_col * sizeof(int));
        }
        else
        {
            *(p + i) = (int *)calloc(new_col, sizeof(int));
        }
    }

    // nhapmang(p, new_row, new_col);
    xuatmang(p, new_row, new_col);

    // Giải phóng bộ nhớ
    for (size_t i = 0; i < new_row; i++)
    {
        free(*(p + i));
    }
    free(p);

    system("pause");
    return 0;
}
