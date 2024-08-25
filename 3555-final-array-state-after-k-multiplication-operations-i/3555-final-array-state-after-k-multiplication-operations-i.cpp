class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        for (int i = 0; i < k; i++) 
        {
            int minVal = *min_element(nums.begin(), nums.end());
            int minIdx = distance(nums.begin(), find(nums.begin(), nums.end(), minVal));
            nums[minIdx] *= multiplier;
        }
        return nums;
    }
};