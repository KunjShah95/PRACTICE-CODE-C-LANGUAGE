#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf("  "); // Two spaces for better alignment
        }
        // Print letters
        for (j = 0; j <= i; j++) {
            printf("%c ", 'A' + j); // Print letters starting from 'A'
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}