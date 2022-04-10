class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        string temp="";
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(count!=k)
            {
                temp=temp+s[i];
                count++;
            }
                
            if(count==k)
            {
                v.push_back(temp);
                temp="";
                count=0;
            }
        }
        if(temp.length()==0)
            return v;
        else
        {
            int n=temp.length();
            k=k-n;
            for(int i=1;i<=k;i++)
            {
                temp=temp+fill;
            }
            v.push_back(temp);
            return v;
        }
    }
};
