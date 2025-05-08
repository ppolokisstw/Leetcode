/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int minDepth(struct TreeNode* root) {
    if(root==NULL)return 0;
    int tmpleft=0,tmpright=0;
    tmpleft=(minDepth(root->left));
    tmpright=(minDepth(root->right));
    int min=0;
    if(tmpleft>0&&tmpright>0){min=(tmpleft<tmpright)?tmpleft:tmpright;}
    else{min=(tmpleft>tmpright)?tmpleft:tmpright;}
    return 1+min;
}
