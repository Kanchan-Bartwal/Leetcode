class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        if(num<10)
            return num;
        
        int temp=num;
        int sum=0;
        while(num>9)
        {
            temp=num;
             while(temp>0)
            {
                 int y=temp%10;
                sum=sum+y;
                temp=temp/10;
            }
            num=sum;
            sum=0;
        }                                           
        return num;
    }
};
