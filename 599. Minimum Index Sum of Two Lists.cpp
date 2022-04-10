class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int min=INT_MAX;
        vector<string> k;
        
        for(int i=0;i<list1.size();i++)
            for(int j=0;j<list2.size();j++)
                if(list1[i].compare(list2[j])==0 && i+j<min)
                    min=i+j;
        
        for(int i=0;i<list1.size();i++)
        for(int j=0;j<list2.size();j++)
            if(list1[i].compare(list2[j])==0 && i+j==min)
                k.push_back(list1[i]);
        
        return k;
    }
};
