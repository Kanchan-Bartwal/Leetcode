class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> v;
        int i=0, j=num.size()-1;
        int sum=0;
        while(i<j)
        {
            sum=num[i]+num[j];
            if(sum>target)
                j--;
            else if(sum<target)
                i++;
            else
            {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
        }
        
        return v;
    }
};
