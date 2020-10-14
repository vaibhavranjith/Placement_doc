/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode *head,int k){
    ListNode *prev=NULL;
    ListNode *curr=head;
    while(curr!=NULL and k-->0){
        ListNode *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *head=new ListNode(-1);
    head->next=A;
    ListNode *cur=A;
    ListNode *prev=head;
    while(cur!=NULL){
        ListNode *tail=cur;
        int i=0;
        while(cur!=NULL and i<B){
            i++;
            cur=cur->next;
        }
        if(i<B)
            prev->next=tail;
        else{
            prev->next=reverse(tail,B);
            prev=tail;
        }
    }
    return head->next;
}
