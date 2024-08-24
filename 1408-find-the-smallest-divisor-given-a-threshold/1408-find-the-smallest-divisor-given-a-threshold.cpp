class Solution {
public:
int sumOfDivisor(vector<int>&nums,int mid)
{
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+ceil(double(nums[i])/double(mid));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=-1;
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(sumOfDivisor(nums,mid)<=threshold)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};