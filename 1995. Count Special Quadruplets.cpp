class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++)
                for(int k=0;k<nums.size();k++)
                    for(int l=0;l<nums.size();l++)
                        if(i<j && j<k && k<l)
                            if(nums[i]+nums[j]+nums[k]==nums[l])
                                count++;
        
        return count;
    }
};
