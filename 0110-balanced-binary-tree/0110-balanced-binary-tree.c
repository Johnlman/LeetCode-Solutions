
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
        int left = calcHeight(root->left);
        int right = calcHeight(root->right);
        return (abs(left-right)<=1 && isBalanced(root->left)&&isBalanced(root->right)); 

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