#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
        if (num % i == 0) {
            return 0; // num is not prime
        }
    }
    return 1; // num is prime
}

int main() {
    int lower, upper;

    // Input range from user
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}