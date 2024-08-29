class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int totalsubset=pow(2,n);
        vector<vector<int>>result;
        for(int i=0;i<totalsubset;i++)
        {
            vector<int>ans;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    ans.push_back(nums[j]);
                }
            }
            result.push_back(ans);

        }
        return result;
    }
};