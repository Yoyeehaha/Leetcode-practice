/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check(struct TreeNode* root, int rootdata) {
    if(!root)return true;
    return check(root->left, rootdata) && check(root->right, rootdata) && (rootdata == root->val);
}

bool isUnivalTree(struct TreeNode* root) {
    
    int rootdata = root->val;
    return check(root, rootdata);
}