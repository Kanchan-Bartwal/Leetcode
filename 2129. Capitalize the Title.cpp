class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        title=title+" ";
        string temp="";
        string ans="";
        
        for(int i=0;i<title.length();i++)
        {
            if(title[i]!=32)
                temp=temp+title[i];
            else
            {
                if(temp.length()<3 && ans.length()!=0)
                ans=ans+" "+temp;
                else if(temp.length()<3 && ans.length()==0)
                    ans=temp;
                else
                {
                    temp[0]=char(temp[0]-32);
                    if(ans.length()!=0)
                    ans=ans+" "+temp;
                    else
                        ans=temp;
                }
                temp="";
            }
        }
        return ans;
    }
};
