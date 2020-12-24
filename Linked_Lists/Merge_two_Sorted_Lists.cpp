/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head=new ListNode(-1);
    ListNode* temp=head;
    while(A!=NULL and B!=NULL)
        if(A->val>B->val){
            head->next=B;
            head=B;
            B=B->next;
        }
        else{
            head->next=A;
            head=A;
            A=A->next;
        }
    if(A!=NULL)
        head->next=A;
    else if(B!=NULL)
        head->next=B;
    return temp->next;
}
