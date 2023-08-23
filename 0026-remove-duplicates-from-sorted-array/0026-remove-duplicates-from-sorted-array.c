int removeDuplicates(int* nums, int numsSize){
    int swap = 1;
    int dupe = 0;
    for (int i = 1; i<numsSize;i++){
        if (nums[i]!=nums[i-1]){
            if (i!=swap){
                nums[swap] = nums[i];
            } swap++;
        } else {
            dupe++;
        }
    }
    return numsSize - dupe;
}