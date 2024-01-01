class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int ,int>mp;
        for(auto & it:nums)
        {
            mp[it]++;
        }
        for(auto & pair:mp )
        {
            int n=pair.second;
            count =count+(n*(n-1))/2;
        }
        return count;
    }
};