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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return vector<int>(0,0);
        queue<TreeNode*> lvl;
        vector<int> ret;
        vector<int> curr_level;
        lvl.push(root);
        lvl.push(NULL);
        while(lvl.size()>1){
            TreeNode* curr=lvl.front();lvl.pop();
            if(curr!=NULL){
                curr_level.push_back(curr->val);
                if(curr->left!=NULL)
                    lvl.push(curr->left);
                if(curr->right!=NULL)
                    lvl.push(curr->right);
            }
            else{
               lvl.push(NULL);
               ret.push_back(curr_level.back());
               curr_level.clear();
            }
            
        }
        ret.push_back(curr_level.back());
        return ret;
    }
};
