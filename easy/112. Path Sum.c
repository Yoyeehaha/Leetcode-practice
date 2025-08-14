/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    bool result1 = false, result2 = false;
    if(root == NULL)return false;
    if(targetSum == root->val && root->left == NULL && root->right == NULL)return true;
    if(root->left) result1 = hasPathSum(root->left, targetSum - root->val);
    if(root->right) result2 = hasPathSum(root->right, targetSum - root->val);
    

    return (result1 || result2);
}