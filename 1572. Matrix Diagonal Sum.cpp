class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++)
            {
                if(i==j||(i+j)==nums.size()-1)
                    sum=sum+nums[i][j];
            }
        return sum;
    }
};
