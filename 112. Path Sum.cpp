class Solution {
public:
     bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) 
            return false;
         
        targetSum =targetSum-root->val;
         
        if(!root->left && !root->right && !targetSum) 
            return true;
         
        return hasPathSum(root->left, targetSum ) || hasPathSum(root->right, targetSum );
    }
};
