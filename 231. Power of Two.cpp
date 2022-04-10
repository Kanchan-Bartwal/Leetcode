class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
        if(n%2!=0)
            return false;
        
        if(n==0)
            return false;
        
        bool k;
        k=isPowerOfTwo(n/2);
        
        return k;
    }
};
