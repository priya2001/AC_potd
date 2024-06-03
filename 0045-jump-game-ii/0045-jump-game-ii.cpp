class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int jump=0;
        int i=0;
        while(i<n-1)
        {
            jump++;
            i=nums[i];
        }
        return jump;
    }
};