class Solution {
public:
    int findMin(vector<int>& nums) {
        //appproach 1
        //TC: o(log(n))
        //sc: o(1)
        // int n=nums.size();
        // int l=0,r=n-1;
        // while(l<r)
        // {
        //     int mid=l+(r-l)/2;
        //     if(nums[mid]>nums[r])
        //     {
        //         l=mid+1;
        //     }
        //     else
        //     {
        //         r=mid;
        //     }
        // }
        // return nums[r];
        
        //approach 2
        // tc:  o(n)
        //sc: o(1)
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,nums[i]);
        }
        return mini;
    }
};