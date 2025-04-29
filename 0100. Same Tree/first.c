/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL&&q==NULL)return true;
    if(p==NULL&&q!=NULL)return false;
    if(p!=NULL&&q==NULL)return false;
    if(p!=NULL&&q!=NULL){
        bool tmpL=isSameTree(p->left,q->left);
        bool tmpmid=((p->val)==(q->val));
        bool tmpR=isSameTree(p->right,q->right);
        return (tmpL&&tmpmid&&tmpR);
    }
    return true;
}
