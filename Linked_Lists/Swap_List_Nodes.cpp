/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *head=new ListNode(-1);
    head->next=A;
    ListNode *cur=head;
    while(cur->next!=NULL and cur->next->next!=NULL){
        ListNode *fst=cur->next;
        ListNode *sec=cur->next->next;
        fst->next=sec->next;
        cur->next=sec;
        cur->next->next=fst;
        cur=cur->next->next;
    }

    return head->next;
}
