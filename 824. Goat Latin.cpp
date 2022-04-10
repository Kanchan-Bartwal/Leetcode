class Solution {
public:
    string toGoatLatin(string s) {
        s=s+" ";
        string temp="";
        string ans="";
        string t="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=32)
                    temp=temp+s[i];
            else
            {
                t=t+'a';
                if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u'||temp[0]=='A'||temp[0]=='E'||temp[0]=='I'||temp[0]=='O'||temp[0]=='U')
                    if(ans.size()==0)
                        ans=temp+"ma"+t;
                    else
                        ans=ans+" "+temp+"ma"+t;
                
else
    if(ans.size()==0)
        ans=temp.substr(1,temp.length())+temp[0]+"ma"+t;
    else
        ans=ans+" "+temp.substr(1,temp.length())+temp[0]+"ma"+t;
                
                temp="";
            }
            
            
        }
        return ans;
    }
};
