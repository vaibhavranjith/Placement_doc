
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A==NULL || A->next==NULL)
        return A;
    int n=0;
    ListNode* tr=A;
    while(tr!=NULL){n++;tr=tr->next;}
    int l=n-(B%n);
    if(l==n)
        return A;
    n=0;
    tr=A;
    while(n<l-1){
        n++;
        tr=tr->next;
    }
    ListNode* rt=tr->next;
    ListNode* temp=rt;
    tr->next=NULL;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=A;
    return rt;
}
