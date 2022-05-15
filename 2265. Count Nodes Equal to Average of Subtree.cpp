class Solution {
public:
    int k=0;
    int c=0;
    int subTreeSum(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        k++;
        return root->val+subTreeSum(root->left)+subTreeSum(root->right);
    }
    
    bool hasAvgEqual(TreeNode* root)
    {
        bool ans=false;
       int s=subTreeSum(root);
        if(root->val==s/k)
        ans=true;
        
        k=0;
        return ans;
    }
    
    void counter(TreeNode * root)
    {
       if(root==NULL)
           return;
        
        if(hasAvgEqual(root))
            c++;
        
        counter(root->left);
        counter(root->right);
    }
    
    int averageOfSubtree(TreeNode* root) {
        counter(root);
        return c;
    }
};
