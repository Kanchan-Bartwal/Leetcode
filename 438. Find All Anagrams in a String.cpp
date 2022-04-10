class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> sArr(26,0), pArr(26,0);
        int n=s.size(), m=p.size();
        if(n<m) return {};
        
        for(auto &ch : p){
            pArr[ch-'a']++;
        }
        
        int i=0, j=0;
        vector<int> ans;
        while(j<m){
            sArr[s[j]-'a']++;
            j++;
        }
        if(sArr == pArr) ans.push_back(i);
        
        while(j<n){
            sArr[s[i]-'a']--;
            sArr[s[j]-'a']++;
            i++;
            j++;
            if(sArr == pArr) ans.push_back(i);
        }
        return ans;
    }
};
