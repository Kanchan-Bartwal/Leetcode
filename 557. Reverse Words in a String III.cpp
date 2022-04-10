class Solution {
public:
    string reverseWords(string s) {
        s=s+" ";
        string temp="";
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=32)
                temp=s[i]+temp;
            else
            {
                if(ans.size()==0)
                    ans=temp;
                else
                ans=ans+" "+temp;
                temp="";
            }
        }
        return ans;
    }
};
