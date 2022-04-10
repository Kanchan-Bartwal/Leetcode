class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int c;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                    c++;
            }
            if(c==1)
            sum=sum+nums[i];
        }
        
        return sum;
    }
};
