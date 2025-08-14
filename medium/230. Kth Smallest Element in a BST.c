/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Traversal(struct TreeNode* root, int* arr, int index) { ///use inorder traversal
    if(!root) return index;
    index = Traversal(root->left, arr, index);
    arr[index++] = root->val;
    index = Traversal(root->right, arr, index);

    return index;
}

int kthSmallest(struct TreeNode* root, int k) {
    
    int* arr = malloc(sizeof(int)*10001);
    Traversal(root, arr, 1);
    return arr[k];
}