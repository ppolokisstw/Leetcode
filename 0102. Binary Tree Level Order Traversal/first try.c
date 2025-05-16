/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int recurdepth_count(struct TreeNode* root,int depth,int*returnSize){
    if(root==NULL){
        if(depth>*returnSize){(*returnSize)=depth;}
        return 0;
    }
    int left=recurdepth_count(root->left,depth+1,returnSize);
    int right=recurdepth_count(root->right,depth+1,returnSize);
    return 1+left+right;
}
void recur(struct TreeNode* root,int* stack,int**array,int depth,int**returnColumnSizes){
    if(root!=NULL){
        array[stack][0]=depth;
        array[stack][1]=root->val;
        (*stack)++;
        returnColumnSizes[depth]++;
        recur(root->left,stack,array,depth+1,returnColumnSizes);
        recur(root->right,stack,array,depth+1,returnColumnSizes);
    }
}
int* column(int** list,int depth,int size){
    for(int i=0;i<size;i++){
        if(list[i][0]==depth)
    }
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    int sum=recurdepth_count(root,0,returnSize);
    int a[sum][2];
    int** depthsize=(int**)malloc(sizeof(int)*(*returnSize));
    **returnColumnSizes=depthsize;

}
