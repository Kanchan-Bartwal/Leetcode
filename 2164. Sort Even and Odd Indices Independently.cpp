class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> eve;
        vector<int> odd;
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i%2)
                odd.push_back(nums[i]);
            else
                eve.push_back(nums[i]);
        }
        
        sort(odd.rbegin(),odd.rend());
        sort(eve.begin(),eve.end());
        
        int k=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(i%2)
                nums[i]=odd[k++];
            else
                nums[i]=eve[l++];
        }
        return nums;
    }
};
