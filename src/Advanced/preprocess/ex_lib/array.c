#include "array.h"
#include <stdio.h>

void input_array(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        getchar(); 
    }
}

void output_array(const int* arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

static int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void output_array_primes(const int* arr, int size) {
    printf("Prime numbers in the array: ");
    for (int i = 0; i < size; ++i) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}