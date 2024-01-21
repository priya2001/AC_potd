class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int ans,n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            int comp=nums[i];
            int start=i+1,end=n-1;
            while(start<end)
            {
                int sum=comp+nums[start]+nums[end];
                if(abs(sum-target)<mini)
                {
                    mini=abs(sum-target);
                    ans=sum;
                }
                if(sum<target)
                {
                    start++;
                }
                else if(sum>target)
                {
                    end--;
                }
                else
                {
                    return target;
                }
            }
        }
        return ans;
    }
};