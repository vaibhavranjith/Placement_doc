/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        ListNode *tt=head;
        ListNode *rb=head->next;
        while(rb!=tt){
            if(rb==NULL || rb->next==NULL)
                return false;
            tt=tt->next;
            rb=rb->next->next;
        }
        return true;
    }
};

//////Actually This is way faster
ListNode *is_cycle(ListNode *head){
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *tt=head;
        ListNode *rb=head;
        while(rb!=NULL && rb->next!=NULL){
            rb=rb->next->next;
            tt=tt->next;
            if(rb==tt)
                return rb;
        }
        return NULL;
    }
