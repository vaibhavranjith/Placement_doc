//https://www.youtube.com/watch?v=OvpKeraoxW0 contains a constant space solution for this a bit tricky!!! but cool :)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        Node *tr=head;
        Node *clone=NULL;
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
};
