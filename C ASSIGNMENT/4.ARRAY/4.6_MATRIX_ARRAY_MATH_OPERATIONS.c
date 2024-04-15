#include <stdio.h>

void input(int matrix[][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\nEnter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void display(int matrix[][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
}

void add(int a[][2], int b[][2], int result[][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtract(int a[][2], int b[][2], int result[][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiply(int a[][2], int b[][2], int result[][2]) {
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (k = 0; k < 2; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("\nMatrix 1:");
    input(matrix1);

    printf("\nMatrix 2:");
    input(matrix2);

    printf("\nMatrix 1:\n");
    display(matrix1);

    printf("\nMatrix 2:\n");
    display(matrix2);

    printf("\nAddition of two matrices:\n");
    add(matrix1, matrix2, result);
    display(result);

    printf("\nSubtraction of two matrices:\n");
    subtract(matrix1, matrix2, result);
    display(result);

    printf("\nMultiplication of two matrices:\n");
    multiply(matrix1, matrix2, result);
    display(result);

    return 0;
}

