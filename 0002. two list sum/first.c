/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* dummy=malloc(sizeof(struct ListNode));
    
    struct ListNode* cur=dummy;
    int t=0;
    while(l1||l2||t){
        if(l1)t=t+l1->val,l1=l1->next;
        if(l2)t=t+l2->val,l2=l2->next;
        cur->next=malloc(sizeof(struct ListNode));
        cur->next->val=t%10;
        cur->next->next=NULL;
        cur=cur->next;
        t/=10;
    }
    return dummy->next;
