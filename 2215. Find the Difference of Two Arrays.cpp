class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        
        for(int i=0;i<nums1.size();i++)
        {
            int flag=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                    flag=1;
            }
            if(flag==0)
             ans[0].push_back(nums1[i]);   
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            int flag=0;
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i]==nums1[j])
                    flag=1;
            }
            if(flag==0)
             ans[1].push_back(nums2[i]);   
        }
        std::sort(ans[0].begin(), ans[0].end());
        std::sort(ans[1].begin(), ans[1].end());
        ans[1].erase(std::unique(ans[1].begin(), ans[1].end()), ans[1].end());
        ans[0].erase(std::unique(ans[0].begin(), ans[0].end()), ans[0].end());
        return ans;
    }
};
