#include<stdio.h>
#include<string.h>

void ex1(){
    char *s = "Deviot";
    char *p = strstr(s,"t");
    printf("index of 't' in string: %ld\n", p - s); // Print the index of 't' in the string
}

void ex2(){
    char s[50];
    printf("Enter a string: ");
    gets(s); // Read a string from user input
    printf("Enter string to search: ");
    char search[50];
    gets(search); // Read the search string from user input
    char *p = strstr(s, search);
    if (p != NULL) {
        printf("Found '%s' at index: %ld\n", search, p - s); // Print the index of the found substring
    } else {
        printf("Substring '%s' not found in the string.\n", search); // Notify if substring is not found
    }
}

void ex3(){
    char s[] = "20/08/2025";
    char *t = strtok(s, "/"); // Tokenize the string using '/' as the delimiter
    char *ngay = t;
    t = strtok(NULL, "/");
    char *thang = t;
    t = strtok(NULL, "/");
    char *nam = t;
    printf("Day: %s, Month: %s, Year: %s\n", ngay, thang, nam); // Print the extracted day, month, and year
}


void ex4(){
    char s[] = "deviot hoc that lam that dao tao that";
    char *t = strtok(s, " "); // Tokenize the string using space as the delimiters
    char str[50];
    while (t != NULL) {
        strcat(str, t); // Copy the token to str
        t = strtok(NULL, " "); // Get the next token
    }
    printf("Merger token: %s\n", str); // Print merged string

}

void ex5(){
    char s[50];
    printf("Enter a string: ");
    gets(s); // Read a string from user input
    int b[256] = {0}; // Initialize a frequency array for characters
    for (int i = 0; s[i] != '\0'; i++) {
        b[s[i]]++; // Count the frequency of each character
    }
    printf("Character frequencies:\n");
    for(int i = 0; s[i] != '\0'; i++) {
        if (b[s[i]] > 0) {
            printf("'%c': %d\n", s[i], b[s[i]]); // Print the character and its frequency
            b[s[i]] = 0; // Reset to avoid duplicate printing
        }
    }
}

void ex6(){
    char s[50];
    printf("Enter a string: ");
    gets(s); // Read a string from user input
    for(int i = 0; i < strlen(s);++i){
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32; // Convert lowercase to uppercase
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32; // Convert uppercase to lowercase
        }
    }
}

void sort_names(char names[][50], int n){
    int min_index;
    for(int i = 0; i < n - 1; ++i){
        min_index = i;
        for(int j = i + 1; j < n; ++j){
            if(strcmp(names[j], names[min_index]) < 0){ // Compare strings lexicographically
                min_index = j; // Update max_index if a larger string is found
            }   
        }
        if(min_index !=i){
            char temp[50];
            strcpy(temp, names[i]); // Swap the strings
            strcpy(names[i], names[min_index]);
            strcpy(names[min_index], temp);
        }
    }
}

void ex7(){
    char s[5][50];
    printf("Enter a string: ");
   
    for(int i = 0; i < 5; ++i) {
        printf("Enter string %d: ", i + 1);
        gets(s[i]); // Read multiple strings from user input
    }

    sort_names(s, 5); // Sort the strings in descending order
    printf("Sorted strings in descending order:\n");

    for(int i = 0; i < 5; ++i) {
        printf("%s\n", s[i]); // Print the sorted strings
    }

}



int main(int argc, char const *argv[])
{
    // ex4(); // Call the function to demonstrate string manipulation
    ex7(); // Call the function to demonstrate string manipulation with multiple strings
    
    getchar(); // Wait for user input before exiting
    return 0;
}
