class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {               
            // if value is present in map already;
            if(mp.count(nums[i]))
            {
                if(i-mp[nums[i]]<=k)
                {
                    return true;
                }
            }
           //just insert in value or update the value of index
            mp[nums[i]]=i;
        }
        return false;
    }
};