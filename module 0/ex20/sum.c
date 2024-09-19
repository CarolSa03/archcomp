#include "check.h"

int sum_lower_triangular_matrix(int mat[][5], int lin){
    if(check_lower_triangular_matrix(mat, lin)){
        int i, j;
        int sum = 0;
        for(i = 0; i < lin; i++){
            for(j = 0; j <= i; j++){
                sum += mat[i][j];
            }
        }
        return sum;
    }
    else{
        return -1;
    }
}