/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ret = malloc(sizeof(int)*2);
    ret[0] = -1;
    ret[1] = -1;
    for (int i = 0;i<numsSize;i++){
        if (ret[0] == -1 && nums[i] == target){
            ret[0] =i;
            ret[1] =i;
        } else if (ret[0] != -1 && nums[i] == target){
            ret[1] = i;
        }
    }
    return ret;
}