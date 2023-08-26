/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if (root!=NULL) {
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if (!left){
            return right+1;
        }
        if (!right){
            return left+1;
        }
        return left<=right?1+left:1+right;
    }
    return 0;
}