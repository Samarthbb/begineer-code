#include <stdio.h>

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the position of the Fibonacci number (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Initialize the first two Fibonacci numbers
    int a = 0, b = 1, fib;

    if (n == 1) {
        printf("The %dth Fibonacci number is: %d\n", n, a);
    } else if (n == 2) {
        printf("The %dth Fibonacci number is: %d\n", n, b);
    } else {
        for (int i = 3; i <= n; i++) {
            fib = a + b; // Calculate the next Fibonacci number
            a = b;       // Update the previous two numbers
            b = fib;
        }
        printf("The %dth Fibonacci number is: %d\n", n, fib);
    }

    return 0;
}
