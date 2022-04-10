class Solution {
public:
    vector<int> v;
    void post(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        post(root->left);
        post(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        post(root);
        return v;
    }
};
