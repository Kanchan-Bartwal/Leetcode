class Solution {
public:
    int findMaxLength(vector<int>& A) {
        int n = A.size();
        unordered_map<int,int>M;
        int sum = 0;
        int max_len = 0;
        M[0] = -1;
        for(int i = 0; i < n; i++)
        {
            A[i] = (A[i] == 0) ? 1 : -1;
        }
        for(int i = 0; i < n; i++)
        {
            sum += A[i];
            if(M.find(sum) == M.end())
                M[sum] = i;
            else// there is a zero inbetween
            {
                max_len = max(max_len,i - M[sum]);
            }
        }
        return max_len;
        
    }
};
