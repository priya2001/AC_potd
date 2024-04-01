class Solution {
public:
    vector<int> countBits(int n) {
        
        // inbuilt function ot used
        // vector<int>res(n+1,0);
        // for(int i=0;i<n+1;i++)
        // {
        //      res[i]=__builtin_popcount(i);
        // }
        // return res;
        
        vector<int>res(n+1,0);
        for(int i=0;i<n+1;i++)
        {
            if(i%2==0)
            {
                res[i]=res[i/2]; //even
            }
            else
            {
                res[i]=res[i/2]+1;//odd
            }
        }
        return res;
        
    }
};