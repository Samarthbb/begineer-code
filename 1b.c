#include <stdio.h>

int main() {
    char choice;
    double temperature, converted;

    // Prompt the user to choose conversion type
    printf("Choose conversion type:\n");
    printf("Enter 'C' to convert Celsius to Fahrenheit\n");
    printf("Enter 'F' to convert Fahrenheit to Celsius\n");
    printf("Your choice: ");
    scanf(" %c", &choice);

    // Conversion based on user's choice
    if (choice == 'C' || choice == 'c') {
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        converted = (temperature * 9 / 5) + 32;
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", temperature, converted);
    }
    else if (choice == 'F' || choice == 'f') {
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        converted = (temperature - 32) * 5 / 9;
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", temperature, converted);
    }
    else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }

    return 0;
}
