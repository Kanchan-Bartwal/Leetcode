class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        if(n%4!=0)
            return false;
        if(n==0)
            return false;
        
        bool k=isPowerOfFour(n/4);
        return k;
    }
};
