class Solution {
public:
    bool isSumEqual(string fW, string sW, string tW) {
        int f=0, s=0, t=0;
        
        for(int i=0;i<fW.length();i++)
            f=f*10+(fW[i]-'a');
        
        for(int i=0;i<sW.length();i++)
            s=s*10+(sW[i]-'a');
        
        for(int i=0;i<tW.length();i++)
            t=t*10+(tW[i]-'a');
        
        if(f+s==t)
            return true;
        else
            return false;
    }
};
