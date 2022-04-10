class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m;
        for(int i=0;i<s1.size();i++)m[s1[i]]++;
        
        int i=0, j=0, count=m.size();
        
        while(j<s2.size()){
            if(m.find(s2[j]) != m.end()){
                m[s2[j]]--;
                if(m[s2[j]] == 0)count--;
            }
            if(j-i+1 < s1.size())j++;
            
            else if(j-i+1 == s1.size()){
                if(count == 0)return true;
                
                else if(count > 0){
                    if(m.find(s2[i]) != m.end()){
                        m[s2[i]]++;
                        if(m[s2[i]] == 1)count++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};
