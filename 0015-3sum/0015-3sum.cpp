//Two pointer technique (Sorted array) Things you must not forget in interviews
// Company Tags : Amazon, Facebook, Google
class Solution {
public:
     vector<vector<int>>result;
    void TwoSum(vector<int>& nums,int target,int i,int j)
    {
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum<target)
            {
                i++;
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {      //first we will remove duplicate from either end (i,j);
                while(i<j&&nums[i]==nums[i+1])i++;
                while(i<j&&nums[j]==nums[j-1])j--;
                result.push_back({-target,nums[i],nums[j]});
                i++; //Things you must not forget in interviews
                j--; //Things you must not forget in interviews
            }
            
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        
        if(n<3)  //Things you must not forget in interviews
        {
            return{};
        }
        
        // sort
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)  //(i<nums.size()-2)Things you must not forget in interviews
        {
            if(i>0 && nums[i]==nums[i-1])  //Things you must not forget in interviews
            {
                continue;
            }
            int n1 = nums[i];
            int target = -n1;
            
            TwoSum(nums,target,i+1,n-1);
        }
        return result;
    }
};