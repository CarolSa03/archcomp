int sum_matrix_values(int mat[5][3]){
    int i, j;
    int sum = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            sum += mat[i][j];
        }
    }
    return sum;
}