class Solution {
public:
    int canBeTypedWords(string txt, string bl) {
        txt=txt+" ";
        int flag=0,c=0;
        for(int i=0;i<txt.length();i++)
        {
            if(txt[i]!=32)
            for(int j=0;j<bl.length();j++)
            {
                if(txt[i]==bl[j])
                    flag=1;
            }
            else
            {
                if(flag!=1)
                    c++;
                
                flag=0;
            }
        }
        return c;
    }
};
