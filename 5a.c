#include <stdio.h>

int main() {
    int n;
    float sum = 0, average;

    // Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the array size.\n");
        return 1;
    }

    int arr[n];

    // Input elements into the array
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the running sum
    }

    // Calculate the average
    average = sum / n;

    // Display the result
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
