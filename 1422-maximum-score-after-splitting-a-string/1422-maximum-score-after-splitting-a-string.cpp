class Solution {
public:
    int maxScore(string s) {
         int n=s.size();
         int result=INT_MIN;
        
        for(int i=0;i<n-1;i++)
        {
             int left_zero=0;
            for(int j=0;j<=i;j++)
            {
               if(s[j]=='0')
               {
                   left_zero++;
               }
                
            }
            int right_one=0;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]=='1')
                {
                    right_one++;
                }
            }
            result=max(result,left_zero+right_one);
        }
       return result;
    }
};