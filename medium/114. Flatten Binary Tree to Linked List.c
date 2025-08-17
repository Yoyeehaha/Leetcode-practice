/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* preorder(struct TreeNode* root) {

    struct TreeNode* leftchild;
    struct TreeNode* rightchild;

    if(root) {
        leftchild = preorder(root->left);
        rightchild = preorder(root->right);

        if(leftchild) {
            leftchild->right = root-> right;
            root->right = root->left;
            root->left = NULL;
        }

    } else {
        return NULL;
    }

    return rightchild ? rightchild : (leftchild ? leftchild : root);
}

void flatten(struct TreeNode* root) {
    preorder(root);
}