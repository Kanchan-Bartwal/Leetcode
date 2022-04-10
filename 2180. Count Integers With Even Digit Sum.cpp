class Solution {
public:
    
    int sum(int i)
    {
        int sm=0; // to get the sum of digits
        while(i>0)
        {
            sm=sm+i%10;
            i=i/10;
        }

        return sm;
    }
    
    int countEven(int num) {
        if(num==1)
            return 0;
        
        int c=0;
        int k;
        for(int i=2;i<=num;i++)
        {
            if(i<10)
            {
               if(i%2==0)
                    c++; 
            }   
            else
            {
                k=sum(i);
                if(k%2==0)
                    c++;
            }
        }
        return c;
    }
};
