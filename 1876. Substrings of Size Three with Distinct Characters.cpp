class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()==0 || s.length()==1 || s.length()==2)
            return 0;
        
        int c=0;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]!=s[i+1])
                if(s[i]!=s[i+2])
                    if(s[i+1]!=s[i+2])
                        c++;
        }
        
        return c;
    }
};
