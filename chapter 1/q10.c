#include <stdio.h>

int main() {
    float marks[5], total = 0.0, average, percentage;
    int i;

    printf("Enter marks for five subjects:\n");

    // Input marks for five subjects
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i]; // Calculate total marks
    }

    // Calculate average and percentage
    average = total / 5;
    percentage = (total / 500) * 100; // Assuming each subject is out of 100

    // Display results
    printf("\nTotal Marks: %f\n", total);
    printf("Average Marks: %f\n", average);
    printf("Percentage: %f%%\n", percentage);

    return 0;
}
