/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    bool result1, result2;
    if (p != NULL && q != NULL) {
        if (p->val != q->val) {
            return false;
        }
        result1 = isSameTree(p->left, q->left);
        result2 = isSameTree(p->right, q->right);
    } else if (p == NULL && q == NULL) {
        return true;
    } else {
        return false;
    }
    

    return (result1 && result2);
}