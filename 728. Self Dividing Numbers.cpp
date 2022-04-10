class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            while(temp>0)
            {
                int y=temp%10;
                if(y==0 || i%y!=0)
                    break;
                
                temp=temp/10;
            }
            
            if(temp==0)
                v.push_back(i);
        }
        
        return v;
    }
};
