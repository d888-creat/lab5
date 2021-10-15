#include <stdio.h> 
#include <stdlib.h> 
#include "func_prot.h" 

void outMatrix(int**, int, int);

void func(void) {
    int matrixRow = 5, matrixColumn = 6;
    int** ptrMatrix = (int**)malloc(matrixRow * sizeof(int*));

    puts("Filling the matrix with random numbers:");     for (int i = 0; i < matrixRow; ++i) {
        ptrMatrix[i] = (int*)malloc(matrixColumn * sizeof(int));
    }
    for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            ptrMatrix[i][j] = rand() % 101 - 50;
        }
    }
    outMatrix(ptrMatrix, matrixRow, matrixColumn);

    puts("Replacing numbers in the matrix with multiples of three by one:\n");     for (int i = 0; i < matrixRow; ++i) {
        for (int j = 0; j < matrixColumn; ++j) {
            if (ptrMatrix[i][j] % 3 == 0) {
                ptrMatrix[i][j] = 1;
            }
        }
    }
    outMatrix(ptrMatrix, matrixRow, matrixColumn);
}
void outMatrix(int** matrix, int matrix_row, int matrix_column) {
    for (int i = 0; i < matrix_row; ++i) {
        for (int j = 0; j < matrix_column; ++j) {
            printf("%d  ", matrix[i][j]);
        }         puts("\n");
    }
}
