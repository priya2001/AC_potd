class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)return 0;
        int i=0;
        int j=0;
        int n=nums.size();
        int result=0;
        int prod=1;
        while(j<n)
        {
            prod=prod*nums[j];
            while(prod>=k)
            {
                prod=prod/nums[i];
                i++;
            }
            result=result+(j-i+1);
            j++;
        }
        return result;
    }
};