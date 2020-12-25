//https://www.youtube.com/watch?v=OvpKeraoxW0 contains a constant space solution for this a bit tricky!!! but cool :)
Node* copyRandomList(Node* head) {
        Node* clone=NULL,*tr=head;
        unordered_map<Node*,Node*> mp;
        while(tr!=NULL){
            clone=new Node(tr->val);
            mp[tr]=clone;
            tr=tr->next;
        }
        tr=head;
        while(tr!=NULL){
            mp[tr]->next=mp[tr->next];
            mp[tr]->random=mp[tr->random];
            tr=tr->next;
        }
        return mp[head];
}
