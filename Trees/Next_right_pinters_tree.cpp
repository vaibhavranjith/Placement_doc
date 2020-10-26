/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
TreeLinkNode *getnextright(TreeLinkNode *root){
    if(root==NULL)
        return NULL;
    TreeLinkNode *tr=root->next;
    while(tr!=NULL){
        if(tr->left!=NULL)
            return tr->left;
        if(tr->right!=NULL)
            return tr->right;
        tr=tr->next;
    }
    return NULL;
}
void Solution::connect(TreeLinkNode* A) {
    TreeLinkNode *nd=A;
    if(nd==NULL)
        return;
    nd->next=NULL;
    while(nd!=NULL){
        TreeLinkNode *tr=nd;
        while(tr!=NULL){
            if(tr->left!=NULL)
                if(tr->right)
                    tr->left->next=tr->right;
                else
                    tr->left->next=getnextright(tr);
            if(tr->right)
                tr->right->next=getnextright(tr);
            tr=tr->next;
        }
        if(nd->left!=NULL)
            nd=nd->left;
        else if(nd->right!=NULL)
            nd=nd->right;
        else
            nd=getnextright(nd);
    }
}
