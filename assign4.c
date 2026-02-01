//Program for operations on 2D array such as accept, display, Add, multiply, transpose, etc
#include <stdio.h>
int MAX = 5;
void accept(int arr[][MAX], int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[][MAX], int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX][MAX];
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    accept(arr, row, col);
    display(arr, row, col);

    return 0;
}