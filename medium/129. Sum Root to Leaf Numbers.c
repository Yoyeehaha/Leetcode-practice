/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int loop(struct TreeNode* root, int sum) {
    if(!root) return 0;
    sum = sum * 10 + root->val;
    if(!root->left && !root->right) {
        return sum;
    }
    return loop(root->left, sum) + loop(root->right, sum);
}

int sumNumbers(struct TreeNode* root) {
    int sum = loop(root, 0);
    return sum;

}