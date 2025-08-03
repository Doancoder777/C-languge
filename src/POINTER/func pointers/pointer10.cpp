#include <stdio.h>

int compare(int a, int b) {
    if (a > b) return -1; // Giảm dần
    else return 1;        // Tăng dần
}

void BubbleSort(int *A, int n, int (*compare)(int, int)) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (compare(A[j], A[j + 1]) > 0) { // So sánh và hoán đổi nếu cần
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i, A[] = {3, 2, 1, 5, 6, 4};

    // Khai báo con trỏ hàm lưu địa chỉ của hàm BubbleSort
    void (*sortPtr)(int*, int, int (*)(int, int)) = BubbleSort;

    // Sử dụng con trỏ hàm để gọi BubbleSort
    sortPtr(A, 6, compare);

    // In mảng đã sắp xếp
    for (i = 0; i < 6; i++) printf("%d ", A[i]);
    return 0;
}
