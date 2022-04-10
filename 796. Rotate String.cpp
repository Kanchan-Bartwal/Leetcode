class Solution {
public:
    bool rotateString(string s, string goal) {
        char ch;
        int k=0;
        while(k<s.length())
        {
              for(int i=0;i<s.length();i++)
              {
                  if(i==0)
                  ch=s[i];
            
                  else
                  {
                     s[i-1]=s[i];
                  }
                 if(i==s.length()-1)
                  s[i]=ch;
               }
            if(s.compare(goal)==0)
                return true;
            k++;
        }
        return false;
        
    }
};
