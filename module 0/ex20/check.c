int check_lower_triangular_matrix(int mat[][5], int lin){
    int i, j;
    for(i = 0; i < lin; i++){
        for(j = i+1; j < 5; j++){
            if(mat[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}