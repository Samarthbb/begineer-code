#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Validate dimensions for multiplication
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("The result of matrix multiplication is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
