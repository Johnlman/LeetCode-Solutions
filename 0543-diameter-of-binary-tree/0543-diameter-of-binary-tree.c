/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int calcHeight(struct TreeNode* root);
int diameterOfBinaryTree(struct TreeNode* root){
    if (root== NULL){
        return 0;
    } else{
        int Dia = calcHeight(root->left)+2+calcHeight(root->right);
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int max = left>=right?left:right;
        return Dia>=max?Dia:max;
    }
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