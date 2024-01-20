class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxiArea=0;
        while(l<r)
        {
            int lh=height[l];
            int rh=height[r];
            int Mini_H=min(lh,rh);
            int length=r-l;
            maxiArea=max(maxiArea,Mini_H*length);
            if(lh<rh)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxiArea;
        
    }
};