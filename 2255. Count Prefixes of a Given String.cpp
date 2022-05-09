class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            string k=s.substr(0,i+1);
            for(int j=0;j<words.size();j++)
            {
                if(k.compare(words[j])==0)
                    c++;
            }
        }
        return c;
    }
};
