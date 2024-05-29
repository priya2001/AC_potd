class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int remaining=target-nums[i];
            
            if(mp.find(remaining)!=mp.end())
            {
                return {mp[remaining],i}; //index are present
            }
            mp[nums[i]]=i; //store the index in map
        }
        return {};
    }
};