class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x=edges[0][0];
        int y=edges[0][1];
        
        int c1=0;
        int c2=0;
        
        for(int i=1;i<edges.size();i++)
        {
            if(edges[i][0]==x)
                c1++;
            if(edges[i][0]==y)
                c2++;
            
            if(edges[i][1]==x)
                c1++;
            if(edges[i][1]==y)
                c2++;
        }
        
        if(c1>c2)
            return x;
        else
            return y;
    }
};
