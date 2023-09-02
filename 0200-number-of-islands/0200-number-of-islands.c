void visit(char** grid, int gridSize, int* gridColSize,int** visited,int i,int j);

int numIslands(char** grid, int gridSize, int* gridColSize){
    int** visited = malloc(sizeof(int*)*gridSize);
    for (int i = 0; i < gridSize; i++) {
        visited[i] = malloc(sizeof(int)*gridColSize[0]);
        for (int j = 0; j < gridColSize[0]; j++) {
            visited[i][j] = 0;
        }
    }

    int ret = 0;
    for (int i = 0;i<gridSize;i++){
        for(int j = 0;j<gridColSize[i];j++){
            if (grid[i][j]=='1' && visited[i][j]==0){
                ret++;
                visit(grid,gridSize,gridColSize,visited,i,j);
            }
            
        }
    }
    return ret;
}


void visit(char** grid, int gridSize, int* gridColSize,int** visited,int i,int j){
    if ((i>=0&&i<gridSize)&&(j>=0&&j<gridColSize[0])) {
        if (!visited[i][j] && grid[i][j]=='1'){
        visited[i][j]=1;
        visit(grid,gridSize,gridColSize,visited,i+1,j);
        visit(grid,gridSize,gridColSize,visited,i-1,j);
        visit(grid,gridSize,gridColSize,visited,i,j+1);
        visit(grid,gridSize,gridColSize,visited,i,j-1);
    }
    }
}
