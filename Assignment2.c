#include <stdio.h>

int main() {
    // Declareing and initializing two 3x3 matrices
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Task 1: Print two 3x3 matrices
    // First matrix
    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Second matrix
    printf("Matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Task 2: Print the addition of matrices
    printf("Addition of Matrices:\n");
    int sumMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Task 3: Print the adjoint of matrix1
    printf("Adjoint of Matrix 1:\n");
    int cofactorMatrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Calculate the cofactor (ignoring the i-th row and j-th column)
            int cofactor = matrix1[(j + 1) % 3][(i + 1) % 3] * matrix1[(j + 2) % 3][(i + 2) % 3] -
                            matrix1[(j + 1) % 3][(i + 2) % 3] * matrix1[(j + 2) % 3][(i + 1) % 3];
            cofactorMatrix[i][j] = cofactor;
            printf("%d\t", cofactor);
        }
        printf("\n");
    }

    printf("\n");

    // Task 4: Print the inverse of matrix2
    printf("Inverse of Matrix 2:\n");
    int determinant = matrix2[0][0] * (matrix2[1][1] * matrix2[2][2] - matrix2[1][2] * matrix2[2][1]) -
                      matrix2[0][1] * (matrix2[1][0] * matrix2[2][2] - matrix2[1][2] * matrix2[2][0]) +
                      matrix2[0][2] * (matrix2[1][0] * matrix2[2][1] - matrix2[1][1] * matrix2[2][0]);

    if (determinant == 0) {
        printf("Matrix is singular, cannot find inverse.\n");
    } else {
        int adjointMatrix[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                adjointMatrix[i][j] = cofactorMatrix[j][i];
                printf("%d\t", adjointMatrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
