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
