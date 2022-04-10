class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string temp="";
        
        for(int i=0;i<words.size();i++)
        {
            temp=temp+words[i];
            if(temp.compare(s)==0)
                return true;
        }
        return false;
    }
};
