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
int Traversal(struct TreeNode* root, int index, int* arr) {
    if(root == NULL) return index;
    
    index = Traversal(root->left, index, arr);
    index = Traversal(root->right, index, arr);
    arr[index++] = root->val;

    return index;
}


int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int* arr = malloc(sizeof(int)*100);
    *returnSize = Traversal(root, 0, arr);
    return arr;

}