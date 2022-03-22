class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int i=1;
        int k=nums[0];
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=k)
            {
                nums[i]=nums[j];
                k=nums[j];
                i++;
            }
        }
        return i;
    }
};
