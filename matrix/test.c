#include "s21_matrix.h"

void s21_print_matrix(matrix_t *matrix) {
  if (matrix == NULL || matrix->matrix == NULL) {
    printf("Matrix is NULL\n");
    return;
  }

  printf("Matrix (%d x %d):\n", matrix->rows, matrix->columns);
  for (int i = 0; i < matrix->rows; i++) {
    for (int j = 0; j < matrix->columns; j++) {
      printf("%6.2f ", matrix->matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  matrix_t A, B, C;
  s21_create_matrix(5, 8, &A);
  s21_create_matrix(5, 8, &B);
  s21_print_matrix(&A);
  printf("---------------------------------");
  s21_print_matrix(&B);
  printf("---------------------------------");
  s21_mult_number(&A, 5.3872341234, &C);
  printf("---------------------------------");
  s21_print_matrix(&C);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&C);
  s21_print_matrix(&A);
  return 0;
}