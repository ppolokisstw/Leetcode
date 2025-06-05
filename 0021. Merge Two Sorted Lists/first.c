/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* tail=&dummy;
    dummy.next = NULL;
    while(list1 && list2){
        if (list1->val >list2-> val){
            tail->next=list2;
            list2=list2->next;
        }else{
            tail->next=list1;
            list1=list1->next;
        }
        tail=tail->next;
    }
    if(list1) tail->next=list1;
    if(list2) tail->next=list2;

    return dummy.next;
}   
