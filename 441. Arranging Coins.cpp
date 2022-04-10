class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int m=1;
        while(n>0)
        {
            n=n-m;
            m++;
            if(n>=0)
            count++;
        }
        return count;
    }
};
