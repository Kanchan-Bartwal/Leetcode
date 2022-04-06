class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length()-1;
        int m=b.length()-1;
        int carry=0;
        string temp=""; // to store answer string
		
        while(n>=0 && m>=0)
        {
            if(a[n]=='0' && b[m]=='0')
            {
                if(carry==1)
                {
                    temp='1'+temp;
                    carry=0;
                }
                else
                {
                    temp='0'+temp;
                    carry=0;
                } 
            }
            else if((a[n]=='0' && b[m]=='1')||(a[n]=='1' && b[m]=='0'))
            {
                if(carry==1)
                {
                    temp='0'+temp;
                    carry=1;
                }
                else
                {
                    temp='1'+temp;
                    carry=0;
                }
            }
            else
            {
                if(carry==1)
                {
                    temp='1'+temp;
                    carry=1;
                }
                else
                {
                    temp='0'+temp;
                    carry=1;
                }
            }
            n--;
            m--;
        }
        
		//if length of a is greater compared to b
        while(n>=0)
        {
            if(a[n]=='0')
            {
                if(carry==1)
                {
                    temp='1'+temp;
                    carry=0;
                }
                else
                {
                    temp='0'+temp;
                    carry=0;
                }
            }
            else
            {
                if(carry==1)
                {
                    temp='0'+temp;
                    carry=1;
                }
                else
                {
                    temp='1'+temp;
                    carry=0;
                }
            }
            n--;
        }
        
		//if length of b is greater compared to a
        while(m>=0)
        {
            if(b[m]=='0')
            {
                if(carry==1)
                {
                    temp='1'+temp;
                    carry=0;
                }
                else
                temp='0'+temp;
            }
            else
            {
                if(carry==1)
                {
                    temp='0'+temp;
                    carry=1;
                }
                else
                {
                    temp='1'+temp;
                }
            }
            m--;
        }
        
		//if an extra carry is remaining after the last summation.
        if(carry==1)
        {
            temp='1'+temp;
            carry=0;
        }
        
        return temp;
    }
};
