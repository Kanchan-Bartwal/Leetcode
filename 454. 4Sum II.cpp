class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size(); 
        int cnt=0;
        unordered_map<int,int>mp;
        
       for(auto it:nums1){
           for(auto it2:nums2){
               mp[it+it2]++;
           }
       }
        
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                int curSum=nums3[k]+nums4[l];
                if(mp.find(-1*curSum) !=mp.end()){
                    cnt+=mp[-1*curSum];
                }
            }
        }    
        return cnt;
    }
};
