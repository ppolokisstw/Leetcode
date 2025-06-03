/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head->next==NULL)return NULL;
    struct ListNode* dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    struct ListNode*cur1=dummy->next;
    struct ListNode*cur2=dummy->next;
    struct ListNode*pre=cur1;
    while(cur2 != NULL && cur2->next != NULL && cur2->next->next != NULL) {
        pre=cur1;
        cur1=cur1->next;
        cur2=cur2->next->next;
    }
    if(cur2->next==NULL){
        pre->next=pre->next->next;
    }else{
    cur1->next=cur1->next->next;
    }
    return dummy->next;

}   
