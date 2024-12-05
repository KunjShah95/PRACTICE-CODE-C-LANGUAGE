#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];
    char ch;

    // 1. Creating and Writing to a File
    file = fopen("example.txt", "w"); // "w" mode: Write
    if (file == NULL) {
        printf("Error: Unable to create file.\n");
        return 1;
    }
    fprintf(file, "Hello, this is a test file.\n"); // Writing to the file
    fprintf(file, "File handling in C is simple.\n");
    fclose(file); // Close the file after writing

    // 2. Reading from a File
    file = fopen("example.txt", "r"); // "r" mode: Read
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    printf("\nContents of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) { // Read line by line
        printf("%s", data);
    }
    fclose(file); // Close the file after reading

    // 3. Appending to a File
    file = fopen("example.txt", "a"); // "a" mode: Append
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    fprintf(file, "This line is appended to the file.\n"); // Append new line
    fclose(file);

    // 4. Reading Character by Character
    file = fopen("example.txt", "r"); // Reopen file for character reading
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    printf("\nReading file character by character:\n");
    while ((ch = fgetc(file)) != EOF) { // Read one character at a time
        putchar(ch);
    }
    fclose(file);

    // 5. Deleting a File
    if (remove("example.txt") == 0) { // Deletes the file
        printf("\n\nFile 'example.txt' deleted successfully.\n");
    } else {
        printf("\n\nError: Unable to delete the file.\n");
    }

    return 0;
}