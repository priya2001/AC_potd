class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        unordered_map<int, int> prev;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 1) ? 1 : -1;
            
            if (sum == 0)
                res = i + 1;
            else if (prev.find(sum) == prev.end())
                prev[sum] = i;
            else
                res = max(res, i - prev[sum]);
        }
        return res;
    }
};

// Intuition
// By converting all numbers with a value of 0 to -1, the problem can be transformed into finding the maximum length of a contiguous subarray with a sum equal to 0.
// Approach
// Using prefix sum to identify subarrays with a sum equal to 0:
// sum[l..r] = prefixSum[r] - prefixSum[l - 1]
// sum[l..r] = 0 => prefixSum[r] = prefixSum[l - 1]
// Using hash map associate each prefix sum with its first appearance index id for efficiently finding matching prefix sums and maximizing subarray lengths:
// If the prefix sum already exist, the subarray from id + 1 to cur is a zero-sum subarray.
// If the prefix sum appears for the first time, update the hash map.