#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any whitespace
    int ascii_value = (int)ch; // Correctly calculate ASCII value
    printf("The ASCII value of %c is %d\n", ch, ascii_value); // Correctly print ASCII value
    return 0;
}