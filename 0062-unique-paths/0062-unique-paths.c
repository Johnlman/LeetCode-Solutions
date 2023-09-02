
int uniquePaths(int m, int n){
    int** ret = malloc(sizeof(int*)*m);
    for (int i = 0; i< m;i++){
        ret[i] = malloc(sizeof(int)*n);
        for (int j = 0; j< n;j++){
            ret[i][j] = 1;
        }
    }
    for (int i = 1; i< m;i++){
        for (int j = 1; j< n;j++){
            ret[i][j] = ret[i-1][j] + ret[i][j-1];
        }
    }
    return ret[m-1][n-1];
}

