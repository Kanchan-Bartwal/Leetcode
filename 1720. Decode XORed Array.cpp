class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for(int i=1;i<=encoded.size();i++)
            ans.push_back(ans[i-1]^encoded[i-1]);
        
        return ans;
    }
};
