class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l=0,t=0;
        
        for(int i=97;i<=122;i++)
        {
            for(int j=0;j<ransomNote.length();j++)
            {
                if(i==ransomNote[j])
                    t++;
            }
            if(t==0)
            {
                l=0;
                t=0;
            }
                
            else
            {
                for(int k=0;k<magazine.length();k++)
                {
                  if(i==magazine[k])
                    l++;
                }
                if(l<t)
                    return false;
                
                l=0;
                t=0;
            }
        }
        return true;
    }
};
