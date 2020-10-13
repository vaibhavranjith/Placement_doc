/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL || A->next==NULL)
        return NULL;
    ListNode *last=A;
    int i=0;
    while(last!=NULL){
        i++;
        last=last->next;
    }
    B=i-B;
    if(B<=0){
        A=A->next;
        return A;
    }
    last=A;
    i=0;
    while(i<B-1){
        last=last->next;
        i++;
    }
    if(last!=NULL and last->next!=NULL)
        last->next=last->next->next;
    return A;
}
