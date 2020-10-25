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
    bool isBalanced(TreeNode* root) {
        return dif(root)!=-2;
    }
    int dif(TreeNode* root){
        if(root==NULL)
            return -1;
        int left=dif(root->left);
        int right=dif(root->right);
        if(left==-2 || right==-2)
            return -2;
        if(abs(left-right)>=2)
            return -2;
        else 
            return max(left,right)+1;
    }
};
