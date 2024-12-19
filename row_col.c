#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    printf("\nSum of elements of each row:\n");
    for (i = 0; i < rows; i++) {
        int row_sum = 0;
        for (j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }
    }
    printf("\nSum of elements of each column:\n");
    for (j = 0; j < cols; j++) {
        int col_sum = 0;
        for (i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, col_sum);
    }
    return 0;
}
