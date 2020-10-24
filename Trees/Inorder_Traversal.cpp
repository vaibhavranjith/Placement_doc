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
    vector<int> ino;
public:
    void traverse(TreeNode* root){
        if(root==NULL)
            return;
        traverse(root->left);
        ino.push_back(root->val);
        traverse(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return ino;
    }
};
