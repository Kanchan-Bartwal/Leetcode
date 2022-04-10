class Solution {
public:
    string reversePrefix(string word, char ch) {
        int temp=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                reverse(word.begin(),word.begin()+i+1);
                break;
            }
        }
        return word;
    }
};
