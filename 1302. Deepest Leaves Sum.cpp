class Solution {
public:
    int sum=0;
    int maxDepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    
    void helper(TreeNode* root, int depth, int maxDepth)
    {
        if(root==NULL)
            return;
        
        if(depth==maxDepth)
            sum+=root->val;
        
        helper(root->left,depth+1,maxDepth);
        helper(root->right,depth+1,maxDepth);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int k=maxDepth(root);
        
        helper(root,1,k);
        
        return sum;
    }
};
