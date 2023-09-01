/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ret = malloc(sizeof(int)*2);
    ret[0] = -1;
    ret[1] = -1;
    int l = 0;
    int r = numsSize-1;
    while (l<=r){
        int m = l + (r - l) / 2;
        if (nums[m] == target){
            int left = m;
            int right = m;
            while(left>= 0 && nums[left]==target){
                left--;
            }
            ret[0] = ++left;
            while(right< numsSize &&nums[right]==target){
                right++;
            }
            ret[1] = --right;
            return ret;
         } else if (nums[m] < target){
            l = m + 1;
        } else {
            r = m - 1;
        } 
    }
    return ret;
    }
    
