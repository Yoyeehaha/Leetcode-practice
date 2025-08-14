/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Traversal(struct TreeNode* root, int* arr, int index) {
    if(!root) return index;
    index = Traversal(root->left, arr, index);
    if(!root->left && !root->right) {
        arr[index++] = root->val;
    }
    index = Traversal(root->right, arr, index);

    return index;
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int* arr1 = malloc(sizeof(int)*100);
    int* arr2 = malloc(sizeof(int)*100);

    int length1 = Traversal(root1, arr1, 0);
    int length2 = Traversal(root2, arr2, 0);

    if(length1 != length2) return false;
    for (int i = 0;i < length1;i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;


}