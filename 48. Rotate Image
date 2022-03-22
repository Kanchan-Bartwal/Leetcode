class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int temp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=temp;
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
