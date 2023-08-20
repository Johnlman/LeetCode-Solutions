int removeElement(int* nums, int numsSize, int val){
    if (numsSize==0){
        return 0;
    }
    int count = 0;
    int start = -1;
    for (int i = 0;i<numsSize;i++){
        if(nums[i]==val && start==-1) {
            start = i;
            count++;
        } else if (nums[i]!=val && start!=-1){
            nums[start++]=nums[i];
            nums[i]=val;
        } else if (nums[i]==val){
            count++;
        }
    }
    return numsSize-count;
}