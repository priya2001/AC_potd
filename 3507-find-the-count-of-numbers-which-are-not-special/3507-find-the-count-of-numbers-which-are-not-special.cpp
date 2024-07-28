class Solution {
public:
    int nonSpecialCount(int l, int r) {
         int count=0;
         for(long long i=2;i*i<=r;i++)
         {
            bool isPrime=true;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    isPrime=false;
                    break;
                }
            }
              if(isPrime)
              {
                  if(i*i>=l&&i*i<=r)
                  {
                       count++;
                  }
              }
         }
       
         return r-l+1-count;
      
    }
};