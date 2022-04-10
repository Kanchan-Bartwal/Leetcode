class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=32)
            count++;
            
            if(s[i]==32&&count==0)
                continue;
            
            if(s[i]==32&&count!=0)
                break;
        }
      return count;  
    }
};
