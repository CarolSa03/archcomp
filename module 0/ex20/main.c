#include <stdio.h>
#include "check.h"
#include "sum.h"

int main(){
    printf("Matrix 1: \n");
    int mat[5][5] = {{1, 0, 0, 0, 0},
                     {2, 3, 0, 0, 0},
                     {4, 5, 6, 0, 0},
                     {7, 8, 9, 10, 0},
                     {11, 12, 13, 14, 15}};
    for(int i = 0; i <5;i++){
        for(int j = 0; j < 5; j++){
            printf("%d, ", mat[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    int check = check_lower_triangular_matrix(mat,5);
    if(check==1){
        printf("Matrix is lower triangular\n");
    }
    else{
        printf("Matrix is not lower triangular\n");
    }

    int sum = sum_lower_triangular_matrix(mat, 5);
    if(sum != -1){
        printf("Sum of lower triangular matrix: %d\n", sum); // 
    }
    else{
        printf("Matrix is not lower triangular\n");
    }
    return 0;


}