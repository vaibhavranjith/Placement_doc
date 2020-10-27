/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* construct(const vector<int> &arr,int beg,int end){
    if(beg>end)
        return NULL;
    int mid=beg + (end-beg)/2;
    TreeNode *nd=new TreeNode(arr[mid]);
    nd->left=construct(arr,beg,mid-1);
    nd->right=construct(arr,mid+1,end);
    return nd;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &arr) {
    if(arr.size()==0){
        return NULL;
    }
    return construct(arr,0,arr.size()-1);
    
}
