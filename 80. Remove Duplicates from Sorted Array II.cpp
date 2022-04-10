class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();

        if (len < 2) return len;
        
        for (int i = 2; i < len; i++) {
            int j = i;
            while (i < len && nums[j - 2] == nums[i]) {
                nums.erase(nums.begin() + i);
                len--;
            }
        }
        
        return nums.size();
    }
};
