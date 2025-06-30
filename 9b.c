#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];
    int *ptr;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer to the start of the array
    ptr = arr;

    // Compute the sum using the pointer
    for (i = 0; i < n; i++) {
        sum += *ptr; // Add the value pointed to by ptr
        ptr++;       // Move the pointer to the next element
    }

    // Output the result
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
