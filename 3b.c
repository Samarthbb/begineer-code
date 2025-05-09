#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
