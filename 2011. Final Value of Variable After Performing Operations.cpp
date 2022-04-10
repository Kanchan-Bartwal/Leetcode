class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        string k="";
        for(int i=0;i<operations.size();i++)
        {
            k=operations[i];
            if(k[0]=='+')
                ++x;
            else if(k[0]=='-')
                --x;
            else
            {
                if(k[1]=='+')
                    x++;
                else if(k[1]=='-')
                    x--;
            }
        }
        return x;
    }
};
