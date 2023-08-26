/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invert(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL) {
        return root;
    }
    struct TreeNode* temp = root->left;
    root->left = invert(root->right);
    root->right = invert(temp);
    return root;
}
struct TreeNode* invertTree(struct TreeNode* root){
    if (root==NULL){
        return NULL;
    }
    return invert(root);
}   


