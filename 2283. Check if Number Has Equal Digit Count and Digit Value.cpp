class Solution {
public:
    
    bool digitCount(string num) {
        int arr[10]={0};
        int n=num.length();
        for(int i=0;i<n;i++)
        {
            arr[num[i]-48]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if((num[i]-48)!=arr[i])
                return false;
        }
        return true;
    }
};
