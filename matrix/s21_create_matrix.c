#include "s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int status = OK;

  if (rows < 1 || columns < 1) {
    status = INCORRECT_MATRIX;
  }
  if (status == OK) {
    result->rows = rows;
    result->columns = columns;
    result->matrix = malloc(sizeof(double *) * rows);
    if (result == NULL) {
      status = INCORRECT_MATRIX;
    }
    for (int i = 0; i < rows && status == OK; i++) {
      result->matrix[i] = malloc(sizeof(double *) * columns);
    }
    if (result == NULL) {
      status = INCORRECT_MATRIX;
    }
    for (int i = 0; i < rows && status == OK; i++) {
      for (int j = 0; j < columns; j++) {
        result->matrix[i][j] = 1;
      }
    }
  }

  return status;
}
