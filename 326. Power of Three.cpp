class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        if(n%3!=0)
            return false;
        if(n==0)
            return false;
        
        bool k;
        k= isPowerOfThree(n/3);
        
        return k;
    }
};
