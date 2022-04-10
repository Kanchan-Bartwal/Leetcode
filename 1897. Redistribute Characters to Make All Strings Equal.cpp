class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int arr[26];
        for(int i=0;i<26;i++)
            arr[i]=0;
        
        string temp="";
        for(int i=0;i<words.size();i++)
        {
            temp=temp+words[i];
        }
        
        for(int i=0;i<temp.length();i++)
        {
            arr[temp[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(arr[i]%words.size()!=0)
                return false;
        }
        
        return true;
    }
};
