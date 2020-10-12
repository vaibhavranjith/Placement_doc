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
    
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode *intersect=is_cycle(head);
        if(intersect==NULL)
            return NULL;
        ListNode *start=head;
        while(intersect!=start){
            intersect=intersect->next;
            start=start->next;
        }
        return start;        
    }
};
