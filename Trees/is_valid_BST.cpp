void inor(TreeNode* root){
        if(root==NULL)
            return;
        inor(root->left);
        in.push_back(root->val);
        inor(root->right);
}

bool isValidBST(TreeNode* node,long long min, long long max){
        if(node == NULL)
            return true;
        if(node->val < min || node->val > max)
            return false;
        if(node->left != NULL && node->left->val >= node->val)
            return false;
        if(node->right != NULL && node->right->val <= node->val)
            return false;
        return isValidBST(node->left, min,(long long) node->val - 1) && isValidBST(node->right, (long long)node->val + 1, max);
}
