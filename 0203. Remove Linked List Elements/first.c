/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
    
    while (head&&head->val==val){
        head = head->next;
    }
    struct ListNode*tmp =head;
    
    while(tmp&&tmp->next){
        if(tmp->next->val==val){
            
            tmp->next=tmp->next->next;
        }else{tmp=tmp->next;}
        

    }    
    return head;
}
