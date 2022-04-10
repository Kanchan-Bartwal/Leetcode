class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s="";
        string temp="";
        string rev="";
        for(int i=0;i<words.size();i++)
        {
            temp=words[i];
            rev=words[i];
            reverse(rev.begin(),rev.end());
            if(temp.compare(rev)==0)
            {
                s=temp;
                break;
            }
        }
        return s;
    }
};
