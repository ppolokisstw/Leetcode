/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if(root==NULL)return 0;
    int tmpleft=0,tmpright=0;
    tmpleft=(maxDepth(root->left));
    tmpright=(maxDepth(root->right));
    return 1+((tmpleft>tmpright)?tmpleft:tmpright);
    
}
