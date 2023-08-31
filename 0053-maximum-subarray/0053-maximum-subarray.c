int maxSubArray(int* nums, int numsSize){
    int prev = nums[0];
    int max = nums[0];
    for (int i = 1;i<numsSize;i++){
        prev = nums[i] + prev > nums[i]? nums[i]+ prev:nums[i];
        max = prev> max? prev:max;
    }
    return max; 
}