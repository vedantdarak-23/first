//Program for operations on 2D array such as accept, display,
//Add, multiply, transpose, etc.
#include <stdio.h>
int max = 5;
void accept(int arr[][max], int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[][max], int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void transpose(int arr[][max], int transposed[][max], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
}
int main() {
    int arr[max][max], transposed[max][max];
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    accept(arr, row, col);
    printf("Original Matrix:\n");
    display(arr, row, col);

    transpose(arr, transposed, row, col);
    printf("Transposed Matrix:\n");
        display(transposed, col, row);
    return 0;
}
