class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min=INT_MAX;
        int index=-1;
        int dis;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                dis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(dis<min)
                {
                    min=dis;
                    index=i;
                }
            }
        }
        return index;
    }
};
