/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize=digitsSize;
    int index = digitsSize-1;;
    while(index>=0){
        if (digits[index]==9){
            digits[index]= 0;
            index--;
        } else {
            digits[index]++;
            return digits;
        }
    }
    *returnSize+=1;
    int* ret;
    ret = malloc(sizeof(int)*(digitsSize+1));
    ret[0]= 1;
    for (int i = 1;i<digitsSize+1;i++){
        ret[i]=0;
    }

    return ret;

    
}