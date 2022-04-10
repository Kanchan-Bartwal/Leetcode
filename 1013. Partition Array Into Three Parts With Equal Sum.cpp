class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int threesum=0;
        
        for(int i=0;i<arr.size();i++)
            threesum=threesum+arr[i];
        
        if(threesum%3!=0)
            return false;
        
        int c=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if(sum==threesum/3)
            {
                c++;
                sum=0;
            }
            
        }
        return c>=3;
    }
};
