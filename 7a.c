#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
