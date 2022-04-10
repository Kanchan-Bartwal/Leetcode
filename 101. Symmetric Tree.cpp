class Solution {
public:
    TreeNode* invert(TreeNode* root)
    {
        if(root==NULL)
            return NULL;
        
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        invert(root->left);
        invert(root->right);
        return root;
        
    }
    
    bool check(TreeNode* r1, TreeNode* r2)
    {
     if(r1==NULL && r2==NULL)
         return true;
        
        if(r1==NULL && r2!=NULL)
            return false;
        
        if(r1!=NULL && r2==NULL)
            return false;
        
        if(r1->val!=r2->val)
            return false;
        
        return check(r1->left, r2->left) && check(r1->right, r2->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        
        if(root->left==NULL && root->right==NULL)
            return true;
        
        if(root->left==NULL && root->right!=NULL)
            return false;
        
        if(root->left!=NULL && root->right==NULL)
            return false;
        
        TreeNode* r1=root->left;
        TreeNode* r2=invert(root->right);
        
        return check(r1,r2);
    }
};
