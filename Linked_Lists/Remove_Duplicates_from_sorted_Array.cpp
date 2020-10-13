/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode *slow=head;
    ListNode *fast=head->next;
    while(fast!=NULL){
        if(fast->val==slow->val){
            slow->next=fast->next;
            fast=fast->next;
        }
        else{
            slow=slow->next;
            fast=fast->next;
        }
    }
    return head;
}
