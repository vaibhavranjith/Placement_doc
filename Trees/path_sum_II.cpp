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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> paths;
        pathfind(root,sum,vector<int>(0,0),paths);
        return paths;
    }
    void pathfind(TreeNode *root,int sum,vector<int> current,vector<vector<int>> &paths){
        if(root==NULL)
            return; 
        current.push_back(root->val);
        if(root->val==sum and root->left==NULL and root->right==NULL){
            paths.push_back(current);
            return;
        }
        pathfind(root->left,sum-root->val,vector<int>(current),paths);
        pathfind(root->right,sum-root->val,vector<int>(current),paths);
    }
};
