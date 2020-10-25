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
    vector<vector<int>> tree;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return tree;
        tree.push_back(vector<int>(1,root->val));
        queue<TreeNode*> node_st;
        node_st.push(root);
        while(!node_st.empty()){
            vector<TreeNode*> level;
            while(!node_st.empty()){
                level.push_back(node_st.front());
                node_st.pop();
            }
            vector<int> curr_level;
            for(int i=0;i<level.size();i++){
                if(level[i]->left!=NULL){
                    curr_level.push_back(level[i]->left->val);
                    node_st.push(level[i]->left);
                }
                if(level[i]->right!=NULL){
                    curr_level.push_back(level[i]->right->val);
                    node_st.push(level[i]->right);
                }
            }
            if(curr_level.size()!=0)
                tree.push_back(curr_level);
        }
        return tree;
    }
};
