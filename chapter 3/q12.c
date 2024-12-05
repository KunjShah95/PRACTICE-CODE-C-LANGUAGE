#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a Krishnamurthy number.\n", n);
    } else {
        printf("%d is not a Krishnamurthy number.\n", n);
    }

    return 0;
}
