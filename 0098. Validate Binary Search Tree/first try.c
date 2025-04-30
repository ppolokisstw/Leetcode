/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 #include <limits.h>
bool Recur(struct TreeNode* root,long max,long min){
    if(root==NULL)return true;
    
    if((long)(root->val)<=min||(long)(root->val)>=max){return false;}
    
    bool right=Recur(root->right,max,root->val);
    bool left=Recur(root->left,root->val,min);
    return right&&left;
}
bool isValidBST(struct TreeNode* root) {
    return Recur(root,(long)INT_MAX+1,(long)INT_MIN-1);//long prevent overflow
}
