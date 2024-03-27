class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0,end=0,prod=1,count=0;
        if(k<=1)return 0;
        
        while(end<n)
        {
            prod=prod*nums[end];
            while(prod>=k)
            {
                prod=prod/nums[start];
                start++;
            }
            count=count+(end-start+1);
            end++;
        }
        return count;
    }
};