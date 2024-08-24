class Solution {
public:
   int canEatAll(vector<int>&piles,int mid,int h)
   {
      int actualEat=0;
      for(auto &x:piles)
      {
        actualEat+=x/mid;//hour
        if(x%mid!=0)
        {
           actualEat++;
        }
      }
      
      return actualEat<=h;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(canEatAll(piles,mid,h))
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};