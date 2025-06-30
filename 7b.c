#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for numbers less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisors from 2 to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Set isPrime to false if a divisor is found
            break;
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
