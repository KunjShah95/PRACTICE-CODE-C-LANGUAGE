
#include <stdio.h>

// Define the struct type for a student
struct student {
    int rollno;
    char name[50];
};

int main() {
    // Declare an array of 5 students
    struct student students[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter roll no of student %d: ", i + 1);
        scanf("%d", &students[i].rollno);
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name); // No need for & with arrays
    }
    for(i = 0; i < 5; i++) {
        printf("Roll no: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
    }
    return 0;
}