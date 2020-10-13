/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev=NULL;
        ListNode *current_node=head;
        
        while(current_node!=NULL){
            ListNode *next_node= current_node->next;
            current_node->next=prev;
            prev=current_node; 
            current_node=next_node;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
                return;
        ListNode *prev=NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *l1=head;
        while(fast!=NULL and fast->next!=NULL ){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode *l2=reverse(slow);
        merge(l1,l2);   
    }
    
    void merge(ListNode *l1, ListNode *l2){
        while(l1!=NULL){
            ListNode *l1_next=l1->next;
            ListNode *l2_next=l2->next;
            
            l1->next=l2;
            
            if(l1_next==NULL){
                break;
            }
            l2->next=l1_next;
            l1=l1_next;
            l2=l2_next;
        }
    }
};
