class Solution {
public:
    int minOperations(string s) {
        int a=0, b=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0 && s[i]!='1')
                a++;
            if(i%2==1 && s[i]!='0')
                a++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0 && s[i]!='0')
                b++;
            if(i%2==1 && s[i]!='1')
                b++;
        }
        
        return min(a,b);
    }
};
