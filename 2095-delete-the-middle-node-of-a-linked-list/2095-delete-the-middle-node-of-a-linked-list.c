/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head){
    if (head->next==NULL){
        return NULL;
    }
    struct ListNode* slow = head;
    struct ListNode* fast= head;
    struct ListNode* slower = head;
    int start = 0;
    while(fast != NULL && fast->next != NULL) {
        if(start) {
            slower = slower->next;
        }
        slow = slow->next;
        fast = fast->next->next;
        start = 1;
    }
    slower->next = slow->next;
    return head;
}