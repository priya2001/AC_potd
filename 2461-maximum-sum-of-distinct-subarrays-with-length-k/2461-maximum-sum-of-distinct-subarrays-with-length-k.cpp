class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long i=0,j=0,sum=0,ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            sum=sum+nums[i];
            if(i-j+1==k)
            {
                if(mp.size()==k)
                {
                    ans=max(ans,sum);
                }
                mp[nums[j]]--;
                sum=sum-nums[j];
                if(mp[nums[j]]==0)
                {
                    mp.erase(nums[j]);
                }
                j++;
            }
        }
        return ans;
    }
};