#include "s21_matrix.h"


int check_matrix(matrix_t *A){

    int status = OK;
    if (A == NULL || A->rows< 1 || A->columns < 1 || A->matrix == NULL){
        status = INCORRECT_MATRIX;
        
    }
    return status;    
    }


