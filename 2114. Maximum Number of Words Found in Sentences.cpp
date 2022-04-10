class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        int count=1;
        for(int i=0;i<sentences.size();i++)
        {
            string s=sentences[i];
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==32)
                    count++;
            }
            if(max<count)
                max=count;
            
            count=1;
        }
        
        return max;
    }
};
