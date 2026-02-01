#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void inputMatrix(int matrix[10][10], int rows, int cols, char name);
void printMatrix(int matrix[10][10], int rows, int cols);
void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void subtractMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int r1, int c1, int c2);

int main() {
    int A[10][10], B[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input sizes
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &r2, &c2);

    // Check size validity for multiplication
    if (r1 > 10 || c1 > 10 || r2 > 10 || c2 > 10) {
        printf("Matrix size too large! Max size is 10x10.\n");
        return 1;
    }

    // Input matrices
    inputMatrix(A, r1, c1, 'A');
    inputMatrix(B, r2, c2, 'B');

    // Addition
    if (r1 == r2 && c1 == c2) {
        addMatrices(A, B, result, r1, c1);
        printf("\nMatrix Addition:\n");
        printMatrix(result, r1, c1);
    } else {
        printf("\nMatrix addition not possible (size mismatch).\n");
    }

    // Subtraction
    if (r1 == r2 && c1 == c2) {
        subtractMatrices(A, B, result, r1, c1);
        printf("\nMatrix Subtraction:\n");
        printMatrix(result, r1, c1);
    } else {
        printf("\nMatrix subtraction not possible (size mismatch).\n");
    }

    // Multiplication
    if (c1 == r2) {
        multiplyMatrices(A, B, result, r1, c1, c2);
        printf("\nMatrix Multiplication:\n");
        printMatrix(result, r1, c2);
    } else {
        printf("\nMatrix multiplication not possible (columns of A != rows of B).\n");
    }

    return 0;
}

// Function to input matrix
void inputMatrix(int matrix[10][10], int rows, int cols, char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d] = ", name, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add matrices
void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
}

// Function to subtract matrices
void subtractMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
}

// Function to multiply matrices
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
