class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        vector<int> ans;
        queue<TreeNode*> q;
        if(root==NULL){
            return a;
        }
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp!=NULL){
                ans.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            else if(temp==NULL && q.size()>=1){
                a.push_back(ans);
                ans={};
                q.push(NULL);
            }
            if(q.empty()){
                a.push_back(ans);
            }
        }
        return a;
    }
};
