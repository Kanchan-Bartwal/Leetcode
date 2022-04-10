class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m);
        if(original.size()!=m*n)
            return {};
        int a=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i].push_back(original[a]);
                a++;
            }
        }
        return v;
    }
};
