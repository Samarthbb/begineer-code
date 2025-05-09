#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int result;

    // Demonstrating postfix increment
    printf("Initial value of a: %d\n", a);
    result = a++;
    printf("After postfix increment (a++):\n");
    printf("Result: %d, Updated a: %d\n\n", result, a);

    // Resetting a to 5
    a = 5;

    // Demonstrating prefix increment
    printf("Initial value of a: %d\n", a);
    result = ++a;
    printf("After prefix increment (++a):\n");
    printf("Result: %d, Updated a: %d\n\n", result, a);

    // Demonstrating postfix decrement
    printf("Initial value of b: %d\n", b);
    result = b--;
    printf("After postfix decrement (b--):\n");
    printf("Result: %d, Updated b: %d\n\n", result, b);

    // Resetting b to 5
    b = 5;

    // Demonstrating prefix decrement
    printf("Initial value of b: %d\n", b);
    result = --b;
    printf("After prefix decrement (--b):\n");
    printf("Result: %d, Updated b: %d\n", result, b);

    return 0;
}
