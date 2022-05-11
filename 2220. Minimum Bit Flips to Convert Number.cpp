class Solution {
public:
    string toBinary(int n)
   {
      string r;
       while (n != 0){
        r= ( n % 2 == 0 ? "0" : "1" )+r;
        n /= 2;
      }
     return r;
   }
    
    int minBitFlips(int start, int goal) {
        string s=toBinary(start);
        string g=toBinary(goal);
        int c=0;
        
        int st=s.length();
        int go=g.length();
        
        int mint=min(st,go);
        if(mint==st)
        {
            mint=go-st;
            for(int i=1;i<=mint;i++)
            {
                s="0"+s;
            }
        }
        else
        {
            mint=st-go;
            for(int i=1;i<=mint;i++)
            {
                g="0"+g;
            }
        }
        
        st=s.length();
        go=g.length();
        int i=st-1,j=go-1;
        while(i>=0 && j>=0)
        {
            if(s[i]!=g[j])
                c++;
            
            i--;j--;
        }
        return c;
    }
};
