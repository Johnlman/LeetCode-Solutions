
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int calcHeight(struct TreeNode* root);
bool isBalanced(struct TreeNode* root){
    if (root!=NULL) {
        if (root->left==NULL&&root->right == NULL){
            return true;
        }
        int left = calcHeight(root->left);
        int right = calcHeight(root->right);
        printf("%d   %d\n",left,right);
        if(abs(left-right)>=2){
            return false;
        } else {
            return (isBalanced(root->left)&&isBalanced(root->right)); 
        }
    }
    return true;
}


int calcHeight(struct TreeNode* root){
    if (root== NULL){
        return -1;
    } else{
        int left = 1+calcHeight(root->left);
        int right = 1+calcHeight(root->right);
        return left>=right?left:right;
    }
}