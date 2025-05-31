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
void recur(struct TreeNode* root,int *returnSize,int cur_deep){
    if(root){
        cur_deep++;
        if(*returnSize<cur_deep){
        *returnSize=cur_deep;
        }
        recur(root->left,returnSize,cur_deep);
        recur(root->right,returnSize,cur_deep);
    }

}
void sumup(struct TreeNode* root,double*sum,int *count,int cur_deep){
    if(root){
        cur_deep++;
        sum[cur_deep-1]+=root->val;
        count[cur_deep-1]++;
        sumup(root->left,sum,count,cur_deep);
        sumup(root->right,sum,count,cur_deep);
    }
}
double* averageOfLevels(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    recur(root,returnSize,0);
    double* sum_array=(double*)calloc((*returnSize),sizeof(double));
    int*count=(int*)calloc((*returnSize),sizeof(int));
    sumup(root,sum_array,count,0);
    for(int i=0;i<(*returnSize);i++){
        sum_array[i]=sum_array[i]/count[i];
    }
    return sum_array;

}
