/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes){
    *returnSize=imageSize;
    returnColumnSizes[0]=(int*)malloc(sizeof(int)*(*returnSize));
    
  for(int i=0;i<*returnSize;i++){
      returnColumnSizes[0][i]=imageColSize[0];
  }
    if (image[sr][sc] != color) {
        fill(image,sr,sc,color,image[sr][sc],imageSize,imageColSize[0]);
    }
    return image;
}

void fill(int** image,int sr,int sc,int color,int target,int imageSize,int colSize) {
        if (sr>= imageSize||sr<0){
            return;
        }
        if (sc>= colSize||sc<0){
            return;
        }
        if (image[sr][sc] == target) {
            image[sr][sc] = color;
            fill(image,sr+1,sc,color,target,imageSize,colSize);
            fill(image,sr-1,sc,color,target,imageSize,colSize);
            fill(image,sr,sc+1,color,target,imageSize,colSize);
            fill(image,sr,sc-1,color,target,imageSize,colSize);
        } 
}