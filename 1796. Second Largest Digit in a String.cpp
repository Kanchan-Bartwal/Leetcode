class Solution {
public:
    int secondHighest(string s) {
        int arr[10]={0};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
                arr[s[i]-'0']++;
        }
        
        bool k=false;
        
        for(int i=9;i>=0;i--)
        {
            if(arr[i]!=0)
                if(k==false)
                    k=true;
                 else
                     return i;
        }
        
        return -1;
    }
};
