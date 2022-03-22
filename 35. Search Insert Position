class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=0, ub=nums.size()-1;
        int mid;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            
            if(nums[mid]>target)
                ub=mid-1;
            else if(nums[mid]<target)
                lb=mid+1;
            else 
                return mid;
        }
        return lb;
    }
};
