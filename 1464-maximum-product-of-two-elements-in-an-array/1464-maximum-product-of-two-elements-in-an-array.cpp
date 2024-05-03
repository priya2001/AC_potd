// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
        
//         int n=nums.size();
//         return (nums[n-1]-1)*(nums[n-2]-1);
        
//     }
// };


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int firstMax  = 0;
        int secondMax = 0;
        
        
        for(int i = 0; i<n; i++) {
            
            if(nums[i] > firstMax) {
                secondMax = firstMax;
                firstMax = nums[i];
            } else {
                secondMax = max(secondMax, nums[i]);
            }
            
        }
        
        return (firstMax-1)*(secondMax-1);
    }
};