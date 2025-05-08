/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root,int* balance) {
    if(root==NULL)return 0;
    int tmpleft=0,tmpright=0;
    tmpleft=(maxDepth(root->left,balance));
    tmpright=(maxDepth(root->right,balance));
    
    if (tmpleft-tmpright>1||tmpleft-tmpright<-1)*balance=0;
    return 1+((tmpleft>tmpright)?tmpleft:tmpright);
    
}
bool isBalanced(struct TreeNode* root) {
    int b_i=1;
    int *balance=&b_i;
    
    
    int tmp =maxDepth(root,balance);
    return *balance;
    
}
