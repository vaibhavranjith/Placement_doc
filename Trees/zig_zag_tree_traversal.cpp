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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return vector<vector<int>>();
        stack<TreeNode*> tg1;
        stack<TreeNode*> tg2;
        vector<vector<int>> ans;
        tg1.push(root);
        while(!tg1.empty()){
            vector<int> ret;
            while(!tg1.empty()){
                ret.push_back(tg1.top()->val);
                if(tg1.top()->left!=NULL)
                    tg2.push(tg1.top()->left);
                if(tg1.top()->right!=NULL)
                    tg2.push(tg1.top()->right);
                tg1.pop();
            }
            if(!ret.empty())
                ans.push_back(ret);
            ret.clear();
            while(!tg2.empty()){
                ret.push_back(tg2.top()->val);
                if(tg2.top()->right!=NULL)
                    tg1.push(tg2.top()->right);
                if(tg2.top()->left!=NULL)
                    tg1.push(tg2.top()->left);
                tg2.pop();
            }
            if(!ret.empty())
                ans.push_back(ret);
        }
        return ans;
    }
};
