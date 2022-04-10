class Solution {
public:
    vector<int> v;
    
    void element(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        element(root->left);
        element(root->right);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return v;
        
        element(root1);
        element(root2);
        
        sort(v.begin(), v.end());
        return v;
    }
};
