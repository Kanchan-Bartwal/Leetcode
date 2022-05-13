class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                    ans.push_back(nums1[i]);
            }
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            for(int j=0;j<nums3.size();j++)
            {
                if(nums2[i]==nums3[j])
                    ans.push_back(nums2[i]);
            }
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums3.size();j++)
            {
                if(nums1[i]==nums3[j])
                    ans.push_back(nums1[i]);
            }
        }
        
        if(ans.size()==0 || ans.size()==1)
            return ans;
        
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
