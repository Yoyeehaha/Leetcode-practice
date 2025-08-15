/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int inOrder(struct TreeNode* root, int* arr, int index) {
    if(!root) return index;
    index = inOrder(root->left, arr, index);
    arr[index++] = root->val;
    index = inOrder(root->right, arr, index);

    return index;
}

bool isValidBST(struct TreeNode* root) {
    int* arr = malloc(sizeof(int)*10000);
    int index = inOrder(root, arr, 0);

    for (int i = 0;i < index - 1;i++) {
        if (arr[i] >= arr[i + 1]) return false;
    }

    free(arr);
    return true;
}