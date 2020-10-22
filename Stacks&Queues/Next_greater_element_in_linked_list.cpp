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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        ListNode *tr=head;
        while(tr!=NULL){
            arr.push_back(tr->val);
            tr=tr->next;
        }
        vector<int> ret(arr.size(),0);
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                ret[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ret;
    }
};
