/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int Traversal(struct TreeNode* root, int* num, int index) {
    
    if (root == NULL) {
        return index;
    } 

    if (root->left) {
        index = Traversal(root->left, num, index);
    } 
    
    num[index++] = root->val;

    if (root->right) {
        index = Traversal(root->right, num, index);
    }

    return index;
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int* arr = malloc(sizeof(int)*100);
    
    *returnSize = Traversal(root, arr, 0);
    
    return arr;
}
