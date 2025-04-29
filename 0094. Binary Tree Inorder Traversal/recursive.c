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
int countnodes(struct TreeNode* root){
    if(root==NULL)return 0;
    return countnodes(root->left)+1+countnodes(root->right);
}
void listnode(struct TreeNode* root, int*list,int* index){
    if(root==NULL)return;
    listnode(root->left,list,index);
    list[(*index)++]=root->val;
    listnode(root->right,list,index);

}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int total=countnodes(root);
    int* list=(int*)malloc(sizeof(int)* total);
    int index=0;
    listnode(root,list,&index);
    *returnSize = index;
    return list;
    
}
