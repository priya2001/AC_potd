class Solution {
public:
bool isPossible(vector<int>&arr,int mid,int k)
{
    int count=1,sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
        if(sum>mid)
        {
            count++;
            sum=arr[i];
        }
    }
    if(count<=k)return true;
    return false;
}
    int splitArray(vector<int>& nums, int k) {
        int maxCap=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            maxCap+=nums[i];
        }
        int low=*max_element(nums.begin(),nums.end());
        int high=maxCap;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isPossible(nums,mid,k))
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