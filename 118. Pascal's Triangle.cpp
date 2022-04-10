class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)
            return {{1}};
        if(n==2)
            return {{1},{1,1}};
        vector<vector<int>> result {{1},{1,1}};
        
        int i=3;
        for(;i<=n;i++)
        {
            vector<int> temp {1};
            for(int j=0;j<result.back().size()-1;j++)
            temp.push_back(result.back()[j]+result.back()[j+1]);
            
            temp.push_back(1);
            result.push_back(temp);
        }
        return result;
    }
};
