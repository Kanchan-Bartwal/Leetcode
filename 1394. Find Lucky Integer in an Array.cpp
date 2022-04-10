class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count=0;
        int max=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            if(count==arr[i])
                if(max<count)
                    max=count;
            
            count=0;
        }
        if(max!=0)
            return max;
        
        return -1;
    }
};
