class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int count=0;
        int match;
        if(ruleKey=="type")
            match=0;
        else if(ruleKey=="color")
            match=1;
        else if(ruleKey=="name")
            match=2;
        else
            return 0;
        
        for(int i=0;i<items.size(); i++)
        {
                if(ruleValue.compare(items[i][match])==0)
                    count++;
        }
        
        return count;
    }
};
