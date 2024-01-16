class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=0;
        int end=n-1;
        int MaxSum=0;
       for(int i=0;i<n/2;i++)
       {
           int sum=nums[start]+nums[end];
           MaxSum=max(MaxSum,sum);
           start++;
           end--;
       }
        return MaxSum;
        
    }
};