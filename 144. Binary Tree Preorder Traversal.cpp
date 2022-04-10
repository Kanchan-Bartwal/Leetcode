class Solution {
public:
    vector<int> v;
    void preorderTraversal1(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        preorderTraversal1(root->left);
        preorderTraversal(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversal1(root);
        return v;
    }
};
