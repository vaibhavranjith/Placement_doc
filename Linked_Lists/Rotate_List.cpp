
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A==NULL || A->next==NULL)
        return  A;
    int n=0;
    ListNode *tr=A;
    ListNode *dr=NULL;
    while(tr!=NULL){ n++; tr=tr->next;}
    int l= (n-B)>0 ? n-B : n-(B%n);
    if(l==n) 
        return A;
    n=0;
    tr=A;
    while(n<l-1){
        n++;
        tr=tr->next;
    }
    dr=tr->next;
    ListNode *tr2=dr;
    tr->next=NULL;
    while(tr2->next!=NULL)
        tr2=tr2->next;
    tr2->next=A;
    return dr;
}
