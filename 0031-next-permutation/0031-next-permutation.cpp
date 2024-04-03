class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        
        // find the blue gola
        int gola_index=-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                gola_index=i-1;
                break;
            }
        }
        
        // find swap index
        if(gola_index!=-1) // yeh condition false hogi to direct reverse ho jayega 
        {
        int swap_index=gola_index;
        for(int j=n-1;j>=gola_index+1;j--)
        {
            if(nums[j]>nums[gola_index])
            {
                swap_index=j;
                break;
            }
        }
        swap(nums[swap_index],nums[gola_index]); 
        }
       
        reverse(nums.begin() + gola_index + 1,nums.end()); //reverse after gola_index
        
        
    }
};