#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids potential overflow

        if (arr[mid] == target)
            return mid; // Element found, return its index
        else if (arr[mid] < target)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    return -1; // Element not found
}

int main() {
    int n, target;

    // Get the size of the array
    printf("Enter the number of elements in the ordered list: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    int arr[n];

    // Input the ordered list
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get the target element to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Output the result
    if (result != -1)
        printf("Element %d found at index %d (0-based index).\n", target, result);
    else
        printf("Element %d not found in the list.\n", target);

    return 0;
}
