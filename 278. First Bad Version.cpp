class Solution {
public:
    int firstBadVersion(int n) {
        int lb=1, ub=n;
        
        
        while(ub>lb)
        {
            int mid=lb+(ub-lb)/2;
            if(isBadVersion(mid))
                ub=mid;
            else
                lb=mid+1;
        }
        return lb;
        
    }
};
