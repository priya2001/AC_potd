class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum==goal)
            {
                count++;
            }
            if(mp.find(sum-goal)!=mp.end())
            {
                count=count+mp[sum-goal];
            }
           mp[sum]++;
          
        }
        return count;
    }
};