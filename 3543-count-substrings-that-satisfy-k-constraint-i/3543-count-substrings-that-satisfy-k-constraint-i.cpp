class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count=0;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            int zero=0,one=0;
            for(int j=i;j<n;j++)
            {
                if(s[j]=='0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
                if(zero<=k||one<=k)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
           
        }
        return count;
    }
};