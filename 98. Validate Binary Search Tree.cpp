class Solution {
public:
    vector<int> v;
    void inorderTraversal(TreeNode* root)
    {
        if(root==NULL)return;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        inorderTraversal(root);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
                return false;
        }
        return true;
    }
};
