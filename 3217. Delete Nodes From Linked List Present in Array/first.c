/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    bool hashset[100001];
    memset(hashset,false,sizeof(hashset));
    for(int i =0 ;i< numsSize;i++){
        hashset[nums[i]]=true;
    }
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val=0;
    dummy->next=head;
    struct ListNode* cur=head;
    struct ListNode* pre=dummy; 
    bool condition=false;
    while(cur){
        
    
        if(hashset[cur->val]==true){
            condition=true;
            
        }
    
        if(condition){
            pre->next=cur->next;
            cur=cur->next;
            condition=false;
        }else{
            pre=cur;
            cur=cur->next;
        }
    }
    return dummy->next;
}
