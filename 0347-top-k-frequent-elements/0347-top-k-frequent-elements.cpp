class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>maxH;
        for(auto &it:mp)
        {
            maxH.push({it.second,it.first});
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(maxH.top().second);
            maxH.pop();
        }
        return ans;
    }
};