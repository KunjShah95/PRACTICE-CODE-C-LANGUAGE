#include <stdio.h>

void calculatePercentage(int marks[], int size) {
    int total = 0, i;
    double percentage;

    // Calculate total marks
    for (i = 0; i < size; i++) {
        total += marks[i];
    }
    
    // Calculate percentage based on total marks
    percentage = (total / (double)(size * 100)) * 100; // Assuming each student can score a maximum of 100
    printf("Percentage: %f%%\n", percentage);
}

int main() {
    int marks[5], i;
    printf("Enter the marks of 5 students:\n");
    
    // Read marks for 5 students
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Calculate and print percentage after all marks are entered
    calculatePercentage(marks, 5);
    
    return 0;
}