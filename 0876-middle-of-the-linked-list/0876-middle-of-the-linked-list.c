/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* slow = head;
    struct ListNode* fast= head;
    int count = 1;
    while(fast != NULL && fast->next != NULL) {
        if (fast->next == NULL){
            count++;
        } else {
            count+=2;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return count%2 == 1?slow:slow->next;
}