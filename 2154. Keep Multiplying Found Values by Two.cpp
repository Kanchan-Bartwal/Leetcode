class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int count=1;
        while(count)
        {
            count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==original)
                {
                    count=1;
                    original*=2;
                    break;
                }
            }
        }
        return original;
    }
};
