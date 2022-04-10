#include<string>
#include<cmath>
class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        int check=0;
        if(num==0)
            return "0";
        
        if(num<0)
        {
            check=1;
            num=abs(num);
        }
        
        while(num>0)
        {
            int y=num%7;
            ans=to_string(y)+ans;
            num=num/7;
        }
        
        if(check==1)
            return "-"+ans;
        else
            return ans;
    }
};
