int climbStairs(int n){
    if (n == 1){
        return 1;
    } else if (n == 2){
        return 2;
    } else {
        int x = 1;
        int y = 2;
        int ret=0;
        for (int i = 3;i<=n;i++) {
            ret = y + x;
            x = y;
            y = ret;
        }
         return ret;
    }    
   
}