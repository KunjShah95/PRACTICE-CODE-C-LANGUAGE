#include <stdio.h>
#include <string.h>

union student {
    int rollno;
    char name[20];
};

int main() {
    union student s;
    int choice;

    printf("Enter 1 to input roll number or 2 to input name: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter roll no: ");
        scanf("%d", &s.rollno);
        printf("Roll no: %d\n", s.rollno);
    } else if (choice == 2) {
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Name: %s\n", s.name);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}