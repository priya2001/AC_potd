//Approach-2 (Better )
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int maxScore(string s) {
         int n=s.size();
         int result=INT_MIN;
         int total_one=count(begin(s),end(s),'1');
         int zero=0;
        
        for(int i=0;i<n-1;i++)
        {
          if(s[i]=='1')
            {
                total_one--;
            }
            else
            {
                zero++;
            }
            result=max(result,total_one+zero);
        }
       return result;
    }
};