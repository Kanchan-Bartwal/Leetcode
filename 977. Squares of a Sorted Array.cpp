class Solution {
    public int[] sortedSquares(int[] nums) {
        for(int i=0; i<nums.length; i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        for(int i=0; i<nums.length; i++)
        {
            for(int j=0; j< nums.length-1; j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int t=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=t;
                }
            }
        }
        return nums;
    }
}
