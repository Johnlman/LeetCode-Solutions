int maxProfit(int* prices, int pricesSize){
    int total = 0;
    int min = prices[0];
    for (int i = 1;i < pricesSize; i++){
        if (prices[i]-min>0){
            total+= prices[i]-min;
        }
        min = prices[i];
    }
    
    return total;
}