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
struct TreeNode* createNode(int i){
    struct TreeNode* newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    newnode->val=i;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
struct TreeNode** treeRecur(int start,int end,int* returnSize){
    if (start > end) {
        struct TreeNode** res = (struct TreeNode**)malloc(sizeof(struct TreeNode*));
        res[0] = NULL;
        *returnSize = 1;
        return res;
    }
    struct TreeNode** Result=(struct TreeNode**)malloc(sizeof(struct TreeNode*)*2000);
    int total=0;
    for(int i = start;i<=end;i++){
        int leftsize,rightsize;
        struct TreeNode** leftTree= treeRecur(start,i-1,&leftsize);
        struct TreeNode** rightTree= treeRecur(i+1,end,&rightsize);
        for(int u=0;u<leftsize;u++){
            for(int v=0;v<rightsize;v++){
                struct TreeNode* newnode=createNode(i);
                newnode->left=leftTree[u];
                newnode->right=rightTree[v];
                Result[total++]=newnode;
            }
        }
        free(leftTree);
        free(rightTree);
    }
    *returnSize=total;
    return Result;
}
struct TreeNode** generateTrees(int n, int* returnSize) {
    if(n==0){
        *returnSize=0;
        return NULL;
    }
    return treeRecur(1,n,returnSize);
}
