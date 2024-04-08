class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int CF=0;
        for(int i=0;i<n;i++)
        {
            int ls=CF;
            int rs=sum-ls-nums[i];
            
            if(ls==rs)
            {
                return i;
            }
            CF=CF+nums[i];
        }
        return -1;
        
    }
};