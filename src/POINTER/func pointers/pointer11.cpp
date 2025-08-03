#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh dùng cho qsort
int compare(const void *a, const void *b)
{
    int A = *(int *)a; // Ép kiểu sang int* và lấy giá trị
    int B = *(int *)b;
    return A - B;
}

int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4}; // Mảng cần sắp xếp

    // Sắp xếp mảng A với qsort
    qsort(A, 6, sizeof(int), compare);

    // In kết quả
    for (i = 0; i < 6; i++)
        printf("%d ", A[i]);

    getchar();
    return 0;
}
