class Solution {
public:
    void rotation(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int temp=mat[j][i];
                mat[j][i]=mat[i][j];
                mat[i][j]=temp;
            }
        }
        
       for(int i=0;i<mat.size();i++)
            reverse(mat[i].begin(), mat[i].end());
        
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat== target)  return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        return false;
    }
};
