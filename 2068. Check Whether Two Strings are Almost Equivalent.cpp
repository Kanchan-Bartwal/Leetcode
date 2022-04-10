class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int c1,c2;
        for(int i='a';i<='z';i++)
        {
            c1=0;
            c2=0;
            for(int j=0;j<word1.length();j++)
                if(word1[j]==i)
                    c1++;
            
            for(int j=0;j<word2.length();j++)
                if(word2[j]==i)
                    c2++;
            
            if(abs(c1-c2)>3)
                return false;
        }
        
        return true;
    }
};
