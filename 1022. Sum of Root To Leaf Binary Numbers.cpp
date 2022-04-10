class Solution {
public:
    int sumRootToLeaf(TreeNode* root, int val=0) {
        if(root==NULL)
            return 0;
        val=val*2+root->val;
        if(root->left==NULL && root->right==NULL)
            return val;
        return sumRootToLeaf(root->left, val)+sumRootToLeaf(root->right,val);
    }
};
