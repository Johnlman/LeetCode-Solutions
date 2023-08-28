int maxProfit(int* prices, int pricesSize){
    int max = 0;
    int min = 10000;
    for (int i = 0;i < pricesSize; i++){
        if (prices[i]<min){
            min = prices[i];
        } 
        max = prices[i]-min> max?prices[i]-min:max;
    }
    
    return max;
}