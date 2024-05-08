class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int i=0,j=0;
        int minL=n+1;
        int sum=0;
        
        while(j<n)
        {
            sum=sum+nums[j];
            while(sum>=target)
            {
                minL=min(minL,j-i+1);
                
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        return minL==n+1?0:minL;
    }
};