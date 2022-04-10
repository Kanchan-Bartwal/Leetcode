class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
   
        priority_queue<int> qq;
        
        int minnn=INT_MAX;
        
        for(int &i:nums)
        {
            if(i%2) i*=2; // making even
            
            minnn= min(i,minnn);
            qq.push(i);
        }
        
        
        // now I will run in condition based infinite loop (for n-> iteration)
        int maxdif=INT_MAX;
        
        while(qq.top()%2==0)
        {
            int maxguy= qq.top(); // current max form max heap
            qq.pop();
            maxdif=min(maxdif, maxguy-minnn);
            
            minnn =min(maxguy/2,minnn); // minnn of array can be by iteration
            
            qq.push(maxguy/2); // decreasing maximum guy
        }
        
        return min(maxdif,qq.top()-minnn);
    }
};
