void visit(char** grid, int gridSize, int* gridColSize,int i,int j){
    if ((i>=0&&i<gridSize)&&(j>=0&&j<gridColSize[0])) {
        if (grid[i][j]=='1'){
        grid[i][j]=0;
        visit(grid,gridSize,gridColSize,i+1,j);
        visit(grid,gridSize,gridColSize,i-1,j);
        visit(grid,gridSize,gridColSize,i,j+1);
        visit(grid,gridSize,gridColSize,i,j-1);
    }
    }
}

int numIslands(char** grid, int gridSize, int* gridColSize){

    int ret = 0;
    for (int i = 0;i<gridSize;i++){
        for(int j = 0;j<gridColSize[i];j++){
            if (grid[i][j]=='1'){
                ret++;
                visit(grid,gridSize,gridColSize,i,j);
            }
        }
    }
    return ret;
}


