class Solution {
public:
    int isCanBloom(vector<int>&bloomDay,int mid,int k)
    {
        int bouqCount=0;
        int consecutive=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                consecutive++;
            }
            else
            {
                consecutive=0;
            }
            if(consecutive==k)
            {
                bouqCount++;
                consecutive=0;
            }
        }
        return bouqCount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int ans=-1;
        int start=0;
        int end=*max_element(bloomDay.begin(),bloomDay.end());
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isCanBloom(bloomDay,mid,k)>=m)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};