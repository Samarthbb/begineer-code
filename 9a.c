#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Pointers pointing to the variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Adding numbers using pointers
    sum = *ptr1 + *ptr2;

    // Output the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
