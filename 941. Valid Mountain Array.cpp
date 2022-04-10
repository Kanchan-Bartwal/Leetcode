class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        if(arr[0]>arr[1])
            return false;
        int k=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                return false;
            if(arr[i]>arr[i-1] && k==1)
                return false;
            else if(arr[i]<arr[i-1] && k==0)
                k=1;
                
        }
        if(k==0)
            return false;
        return true;
    }
};
