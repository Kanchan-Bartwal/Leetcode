class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
                max=candies[i];
        }
        vector<bool> v;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
                v.push_back(true);
            else
                v.push_back(false);
        }
        
        return v;
    }
};
