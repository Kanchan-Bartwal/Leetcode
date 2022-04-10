class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> v;
        for(int i=0;i<paths.size();i++)
            v.push_back(paths[i][1]);
        int count;
        for(int i=0;i<v.size();i++)
        {
            count=0;
            for(int j=0;j<paths.size();j++)
            if(paths[j][0]==v[i])
                count++;
            
            if(count==0)
                return v[i];
        }
        return "-1";
    }
};
