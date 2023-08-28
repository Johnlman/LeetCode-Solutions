/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int total = 1;
    int *ret=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int zeroCount = 0;
    for (int i = 0;i<numsSize;i++){
        if (nums[i]!=0){
            total*=nums[i];
        } else{
            zeroCount++;
        }
    }
    if (zeroCount<2){
         for (int i = 0;i<numsSize;i++){
        if (nums[i]!=0&& zeroCount==0){
            ret[i]=total/nums[i];
        } else if (nums[i]!=0&& zeroCount>0){
            ret[i] = 0;
        } else {
            ret[i] = total;
        }
    }
    } else {
        for (int i = 0;i<numsSize;i++){
            ret[i] = 0;
    }
    }
   
    return ret;
}