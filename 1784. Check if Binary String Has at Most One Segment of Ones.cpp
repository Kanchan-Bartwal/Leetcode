class Solution {
public:
    bool checkOnesSegment(string s) {
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                flag=-1;
            if(flag==-1 && s[i]=='1')
                return false;
        }
        return true;
    }
};
