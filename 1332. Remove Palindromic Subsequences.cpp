class Solution {
public:
    
    bool isPalindrome(string s)
    {
        int n=s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
                return false;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        if(isPalindrome(s))
            return 1;
        else 
            return 2;
    }
};
