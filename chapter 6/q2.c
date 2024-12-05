#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    int n, i;
    int *array;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically for the array
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read values into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the array values
    printf("The values in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, array[i]);
    }

    // Free the dynamically allocated memory
    free(array);

    return 0;
}
