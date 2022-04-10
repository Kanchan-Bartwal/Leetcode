class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int rev=0;
        while(temp>0)
        {
            rev=rev*10+ temp%10;
            temp=temp/10;
        }
        
        temp=rev;
        int doub=0;
        while(temp>0)
        {
            doub=doub*10+ temp%10;
            temp=temp/10;
        }
        
        if(num==doub)
            return true;
        else
            return false;
    }
};
