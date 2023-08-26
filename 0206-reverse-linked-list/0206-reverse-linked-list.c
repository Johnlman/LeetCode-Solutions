struct ListNode* reverse(struct ListNode* prev,struct ListNode* cur);
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if (head == NULL){
        return NULL;
    }
    return reverse(NULL,head);
}

struct ListNode* reverse(struct ListNode* prev,struct ListNode* cur) {
    if (cur->next == NULL){
        cur->next = prev;
        return cur;
    } else{
        struct ListNode* next = cur->next;
        cur->next = prev;
        return reverse(cur,next);
    }
}