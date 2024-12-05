#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print the first half of the row
        for (int j = 1; j <= i; j++) {
            printf("%c", j+64);
        }

        // Print the second half of the row
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", j+64);
        }

        printf("\n");
    }

    return 0;
}