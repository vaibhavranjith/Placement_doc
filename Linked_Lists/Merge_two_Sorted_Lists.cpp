/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode head(-1);
    ListNode *last=&head;
    while(A!=NULL and B!=NULL){
        if(A->val>B->val){
           last->next=B;
           last=B;
           B=B->next;
        }
        else{
            last->next=A;
            last=A;
            A=A->next;
        }
    }
    if(A!=NULL){
        last->next=A;
    }
    if(B!=NULL){
        last->next=B;
    }
    return head.next;
}
