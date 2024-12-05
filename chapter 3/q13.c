#include <stdio.h>

// Function to calculate power (base^exp) manually
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n, temp, sum = 0, digits = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Calculate the number of digits
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of digits raised to the power of 'digits'
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, digits);  // Use custom power function
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
