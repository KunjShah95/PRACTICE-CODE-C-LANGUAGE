#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3], i, j, k;

    // Input for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize the result matrix to zero
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result
    printf("Multiplication of two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}