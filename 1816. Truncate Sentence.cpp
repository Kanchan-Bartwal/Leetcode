class Solution {
public:
    string truncateSentence(string s, int k) {
        s=s+" ";
        string temp="";
        string ans="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=32)
                temp=temp+s[i];
            else
            {
                if(k==0)
                    break;
                if(ans.size()!=0)
                ans=ans+" "+temp;
                else
                ans=temp;
                k--;
                temp="";
            }
        }
        return ans;
    }
};
