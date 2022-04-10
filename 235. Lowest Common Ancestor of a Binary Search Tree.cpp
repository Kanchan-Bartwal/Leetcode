class Solution {
public:
    TreeNode* ans ;
    void func(TreeNode* root,TreeNode* p , TreeNode* q){
        if(root==NULL)return ;
        if(root==p || root==q){
            ans=root;
            return ;
        }
       if(root->val>p->val && root->val> q->val){
            func(root->left,p,q);
            return ;
        }
        if(root->val<p->val && root->val< q->val){
            func(root->right,p,q);
            return ;
        }
        if((root->val>p->val && root->val<q->val)||(root->val<p->val && root->val >q->val)){
            ans= root;
            return ;
        }
        return ;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        func(root,p ,q);
        return ans; 
    }
};
