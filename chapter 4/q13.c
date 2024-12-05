#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include stdlib.h for exit()
#define MAX_SIZE 100

void printMenu() {
    printf("\nMenu:\n");
    printf("1. String Length (Strlen)\n");
    printf("2. String Copy (Strcpy)\n");
    printf("3. String Concatenation (Strcat)\n");
    printf("4. String Comparison (Strcmp)\n");
    printf("5. String Copy N Characters (Strncpy)\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int choice, length, result, size_num;

    while (1) {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                length = strlen(str1);
                printf("Length of string: %d\n", length);
                break;
            case 2:
                printf("Enter string to copy: ");
                scanf("%s", str2);
                strcpy(str1, str2);
                printf("Copied string: %s\n", str1);
                break;
            case 3:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Enter string to concatenate: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 4:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Enter string to compare: ");
                scanf("%s", str2);
                result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 5:
                printf("Enter string to copy: ");
                scanf("%s", str2);
                printf("Enter number of characters to copy: ");
                scanf("%d", &size_num);
                strncpy(str1, str2, size_num);
                str1[size_num] = '\0'; // Ensure null termination
                printf("Copied string: %s\n", str1);
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}