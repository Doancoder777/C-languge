#include<stdio.h>
#include<string.h>

// Exercise 1: Write a program to input a 2D array. Find min/max elements of the array.
void ex1(){
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    
    // Input array
    printf("Enter array elements:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Find min and max
    int min = arr[0][0];
    int max = arr[0][0];
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] < min){
                min = arr[i][j]; // Update minimum value
            }
            if(arr[i][j] > max){
                max = arr[i][j]; // Update maximum value
            }
        }
    }
    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

// Exercise 2: Change all prime numbers in 2D array to 0.
int is_prime(int n){
    if(n < 2) return 0; // Numbers less than 2 are not prime
    if(n == 2) return 1; // 2 is prime
    if(n % 2 == 0) return 0; // Even numbers (except 2) are not prime
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return 0; // Check for odd divisors
    }
    return 1; // Number is prime
}

void ex2(){
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    
    // Input array
    printf("Enter array elements:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Original array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Change prime numbers to 0
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(is_prime(arr[i][j])){
                arr[i][j] = 0; // Set prime numbers to 0
            }
        }
    }
    
    printf("Array after changing primes to 0:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Exercise 3: For 2D array, write function to cut any odd row in the 2D array.
void ex3(){
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    
    // Input array
    printf("Enter array elements:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Original array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Array after removing odd rows (keeping even rows only):\n");
    for(int i = 0; i < m; i++){
        if(i % 2 == 0){ // Keep only even indexed rows (0, 2, 4, ...)
            for(int j = 0; j < n; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
}

// Exercise 4: Write program to input names of 5 people (store in 2D array ten[5][50]) 
// and write function to sort array alphabetically from a-z.
void sort_names(char names[][50], int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(strcmp(names[j], names[min_index]) < 0){ // Compare strings lexicographically
                min_index = j; // Update min_index if a smaller string is found
            }
        }
        if(min_index != i){
            char temp[50];
            strcpy(temp, names[i]); // Swap the strings
            strcpy(names[i], names[min_index]);
            strcpy(names[min_index], temp);
        }
    }
}

void ex4(){
    char ten[5][50]; // 2D array to store 5 names, each up to 50 characters
    
    printf("Enter names of 5 people:\n");
    for(int i = 0; i < 5; i++){
        printf("Enter name %d: ", i + 1);
        getchar(); // Clear buffer
        gets(ten[i]); // Read name from user input
    }
    
    printf("Original names:\n");
    for(int i = 0; i < 5; i++){
        printf("%d. %s\n", i + 1, ten[i]);
    }
    
    sort_names(ten, 5); // Sort names alphabetically
    
    printf("Names sorted alphabetically (a-z):\n");
    for(int i = 0; i < 5; i++){
        printf("%d. %s\n", i + 1, ten[i]); // Print sorted names
    }
}

int main(int argc, char const *argv[])
{
    // ex1(); // Call function to find min/max in 2D array
    // ex2(); // Call function to change primes to 0
    // ex3(); // Call function to cut odd rows
    ex4(); // Call function to sort names alphabetically
    
    getchar(); // Wait for user input before exiting
    return 0;
}