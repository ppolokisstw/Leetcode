/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *slow=head,*fast=head;
    while(fast){
        if(n<0)slow=slow->next;
        n--;
        fast=fast->next;
}
    if(n==0)return head->next;
    slow->next=slow->next->next;
    return head;
    
}
