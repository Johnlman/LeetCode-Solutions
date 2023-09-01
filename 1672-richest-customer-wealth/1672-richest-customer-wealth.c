int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max = 0;
    for (int i  = 0;i<accountsSize;i++){
        int temp = 0;
        for (int j = 0; j<accountsColSize[i];j++){
            temp+= accounts[i][j];
        }   
        if (temp>max){
            max = temp;
        }
        max = temp>max?temp:max;
    }
    return max;
}