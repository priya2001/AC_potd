class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int n=nums.size();
        // int s=0,e=n-1,mid;
        // if(n==0)
        // {
        //     return 0;
        // }
        // while(s<=e)
        // {
        //     mid=(s+e)/2;
        //     if(nums[mid]==target)
        //     {
        //         return mid;
        //     }
        //     else if(nums[mid]<target)
        //     {
        //         s=mid+1;
        //     }
        //     else
        //     {
        //         e=mid-1;
        //     }
        // }
        // return s;
        
        
        int start=0,end=nums.size()-1;
        int ans=nums.size();
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]>=target)
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