/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int inorderTraversal(struct TreeNode* root, int* arr, int index) {
    if(!root) return index;
    index = inorderTraversal(root->left, arr, index);
    arr[index++] = root->val;
    index = inorderTraversal(root->right, arr, index);

    return index;
}

struct TreeNode* increasingBST(struct TreeNode* root) {
    int* arr = malloc(sizeof(int)*100);
    int length = inorderTraversal(root, arr, 0);

    struct TreeNode* dummy = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    dummy->val = arr[0];
    dummy->left = NULL; //remember to initialize
    dummy->right = NULL;
    struct TreeNode* temp = dummy;

    for(int i = 1;i < length;i++){
        struct TreeNode* new = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        new->val = arr[i];
        new->left = NULL; //remember to initialize
        new->right = NULL;
        temp->right = new;
        temp = temp->right;
    }

    return dummy;
}