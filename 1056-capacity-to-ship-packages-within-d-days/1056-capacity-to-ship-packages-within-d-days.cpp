class Solution {
public:
    bool isPossible(vector<int>&weights,int mid,int days)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<weights.size();i++)
        {
            sum=sum+weights[i];
            if(sum>mid)
            {
                count++;
                sum=weights[i];
            }
        }
        if(count<=days)
        {
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxiCapicity=0;
        int ans=-1;
        for(int i=0;i<weights.size();i++)
        {
            maxiCapicity+=weights[i];
        }
        int low=*max_element(weights.begin(),weights.end());
        int high=maxiCapicity;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isPossible(weights,mid,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};