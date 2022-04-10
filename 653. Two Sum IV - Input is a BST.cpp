class Solution {
public:
    void helper(TreeNode* root, vector<int>& v)
    {
        if(root==NULL)
            return;
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        helper(root,v);
        
        int s=0;
        int e=v.size()-1;
        while(s<e)
        {
            if(v[s]+v[e]==k)
                return true;
            if(v[s]+v[e]<k)
                s++;
            if(v[s]+v[e]>k)
                e--;
            
        }
        return false;
    }
};
