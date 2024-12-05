#include <stdio.h>

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf("  "); // Two spaces for better alignment
        }
        // Print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n = 5; // You can change this value to print a different size pattern
    printPattern(n);
    return 0;
}