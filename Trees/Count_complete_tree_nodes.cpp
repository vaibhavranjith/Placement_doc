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
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*> node_st;
        node_st.push(root);
        int count=1;
        while(!node_st.empty()){
            TreeNode *curr=node_st.front();node_st.pop();
            if(curr->left!=NULL){
                count++;
                node_st.push(curr->left);
            }
            if(curr->right!=NULL){
                count++;
                node_st.push(curr->right);
            }
        }
        return count;
    }
};
