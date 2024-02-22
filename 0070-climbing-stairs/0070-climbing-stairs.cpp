class Solution {
public:
    int climbStairs(int n) {
        /* this would be the first question of dp to be solve while leaarning the dp*/
      if(n==1)
      {
          return 1;
      }
      int a[n+1];
      a[1]=1;
      a[2]=2;
        for(int i=3;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];
    }
};