#include <stdio.h>

int main() {
    int limit, count = 1;

    // Get the limit from the user
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Outer loop for the rows
    for (int i = 1; count <= limit; i++) {
        // Inner loop for the numbers in each row
        for (int j = 1; j <= i && count <= limit; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
