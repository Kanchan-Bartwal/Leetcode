class Solution {
public:
    string largestGoodInteger(string num) {
        int arr[10]={0,0,0,0,0,0,0,0,0,0};
        
        string ans="";
        
        for(int i=0;i<num.length()-2;)
        {
            char a=num[i];
            char b=num[i+1];
            char c=num[i+2];
            
            if(a==b && b==c)
            {
              a=a-48;
              arr[a]=3;  
              i=i+3;
            }
            else i++;
        }
        
        for(int i=9;i>=0;i--)
        {
            if(arr[i]>2)
            {
               ans=to_string(i)+to_string(i)+to_string(i);
                return ans;
            }
        }
        
        return ans;
    }
};
