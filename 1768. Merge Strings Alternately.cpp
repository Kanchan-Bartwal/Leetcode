class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string temp="";
        while(i<word1.length() && i<word2.length())
        {
            temp=temp+word1[i]+word2[i];
            i++;
        }
        
            while(i<word2.length())
            {
                temp=temp+word2[i];
                i++;
            }
        
        

            while(i<word1.length())
            {
                temp=temp+word1[i];
                i++;
            }
        
        return temp;
    }
};
