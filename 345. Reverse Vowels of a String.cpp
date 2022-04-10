class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
                v.push_back(s[i]);
        }
        int k=v.size()-1;
        
        while(k>=0)
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
                {
                    s[i]=v[k];
                    k--;
                }
            }
        }
        return s;
    }
};
