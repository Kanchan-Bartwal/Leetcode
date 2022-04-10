class Solution {
public:
    bool squareIsWhite(string c) {
        int s=c[0]-'a';
        int t=c[1]-'1';
        
        if((s+t)%2==1)
            return true;
        else
            return false; 
    }
};
