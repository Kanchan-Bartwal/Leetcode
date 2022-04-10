class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int flag=0;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=0; j<arr.size();j++)
            {
                if(i!=j && arr[i]==arr[j])
                {
                    flag=1;
                    continue;
                }
            }
            if(flag==0)
                k--;
            
            flag=0;
            
            if(k==0)
                return arr[i];
        }
        return "";
    }
};
