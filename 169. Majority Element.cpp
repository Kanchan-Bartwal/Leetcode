class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans ;
        
        for(int i = 0; i< nums.size(); i++)
        {
            // storing frequency/occurences of  elements in a map
            m[nums[i]]++;
        }
        
        for(int i = 0; i< nums.size(); i++)
        {
		    // if freg of an element is greater than num.size()/2
            if(m[nums[i]] > (nums.size()/2))
            {
                ans =  nums[i];
            break;
            }
        }
        return ans;   // ans
    }
};
