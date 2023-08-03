#include <stdlib.h>

int maxArea(int* height, int heightSize){
    int left=0;
    int right = (heightSize-1);
    int max = 0;
    while(left<=right) {      
    int comp = height[left]>=height[right] ?height[right]*(right-left):height[left]*(right-left);
    max = comp>max? comp:max;
        if (height[left]<height[right]){
            left++;
        } else if (height[left]>height[right]){
            right--;
        } else {
            left++;
            right--;
        }
    }
    return max;
}