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
    int depth;
    void finddep(TreeNode* root,int d){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            this->depth=max(d,this->depth);
        }
        finddep(root->left,d+1);
        finddep(root->right,d+1);
    }
public:
    int maxDepth(TreeNode* root) {
        this->depth=0;
        if(root==NULL)
            return 0;
        finddep(root,1);
        return this->depth;
    }
};
