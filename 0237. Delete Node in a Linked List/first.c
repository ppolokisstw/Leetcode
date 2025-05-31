/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    // struct ListNode*tmp=node;
    node->val = node->next->val; 
    
    node->next=node->next->next;
    
}
