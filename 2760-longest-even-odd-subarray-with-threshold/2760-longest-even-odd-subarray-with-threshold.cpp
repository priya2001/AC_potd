class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
     
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            if(nums[i]%2==0 && nums[i]<=threshold)
            {
                c=1;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]>threshold||nums[j]%2==nums[j-1]%2)
                    {
                        break;
                    }
                    c++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};