class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        if(nums.size()==1)
            return 0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        int prefix=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            prefix=prefix+nums[i-1];
            if(sum-prefix-nums[i]==prefix)
                return i;
        }
        return -1;
    }
};
