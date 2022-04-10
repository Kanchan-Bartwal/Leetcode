class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num : nums) {
            ++mp[num];
        }
        int ans = 0;
        for(auto i : mp) {
            if((k == 0 && i.second > 1) || (k != 0 && mp.count(i.first+k))) {
                ++ans;
            }
        }
        return ans;
    }
};
