class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int arr[26];
        for(int i=0;i<26;i++)
        arr[i]=0;
        
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }
        
        int prev=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
                continue;
            else
            {
                if(prev==0)
                    prev=arr[i];
                else if(prev!=arr[i])
                    return false;
            }
        }
        return true;
    }
};
