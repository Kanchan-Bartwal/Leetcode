class Solution {
public:
    string largestOddNumber(string num) {
        int i,k;
        for(i=num.length()-1; i>=0;i--)
        {
            k=num[i]-'0';
            if(k%2!=0)
                break;
        }
        
        return num.substr(0,i+1);
    }
};
