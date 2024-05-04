class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        
        int start_with_0 = 0; //0101010..
        int start_with_1 = 0; //10101010....
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
               if(s[i]=='0')
               {
                   start_with_0++;
               }
            }
            else
            {
               if(s[i]=='1')
               {
                   start_with_0++;
               }
            }
        }
        return min(start_with_0,n-start_with_0);
    }
};