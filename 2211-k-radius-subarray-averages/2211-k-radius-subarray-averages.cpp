class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();

        if(n==0)
        {
            return nums;
        }
        vector<int>result(n,-1);

        if(n<2*k+1)
        {
            return result;
        }
        long long window=0;
        int left=0;
        int right=2*k;
        int i=k;
        int count=2*k+1;

        for(int i=left;i<=right;i++)
        {
            window=window+nums[i];
        }
        result[i]=window/count;
        i++;
        right++; //shifting window
        while(right<n)
        {
            int newValue=nums[right];
            int goneValue=nums[left];
            window=window-goneValue+newValue;
            result[i]=window/count;
            i++;
            left++;
            right++;
        }
        return result;
    }

};