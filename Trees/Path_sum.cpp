/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;
        stack<TreeNode*> node_st;
        stack<int> sum_st;
        node_st.push(root);
        sum_st.push(sum-root->val);
        while(!node_st.empty()){
            TreeNode *curr=node_st.top();node_st.pop();
            int curr_sum=sum_st.top();sum_st.pop();
            if(curr->left==NULL and curr->right==NULL and curr_sum==0){
                return true;
            }
            if(curr->left!=NULL){
                node_st.push(curr->left);
                sum_st.push(curr_sum-curr->left->val);
            }
            if(curr->right!=NULL){
                node_st.push(curr->right);
                sum_st.push(curr_sum-curr->right->val);
            }
        
        }
        return false;
        
    }
};
