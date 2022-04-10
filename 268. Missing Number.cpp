class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count;
        for(int i=0;i<=nums.size();i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i==nums[j])
                {
                    count=1;
                    break;
                }
            }
            if(count==0)
             return i;
        }
        return 0;
    }
};
