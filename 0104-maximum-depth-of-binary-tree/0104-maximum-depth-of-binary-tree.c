/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    if (root!=NULL) {
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return left>=right?1+left:1+right;
    }
    return 0;
}