class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
//         brute force approch;
        
        // int count=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum=sum+nums[j];
        //         if(sum==k)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
   
//         optimal approach
        int n=nums.size();
        int count=0;
        unordered_map<int ,int>preSum;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            
            sum=sum+nums[i];
            if(sum==k)
            {
                count++;
            }
            if(preSum.find(sum-k)!=preSum.end())
            {
                count=count+preSum[sum-k];
            }
                preSum[sum]++;
        }
        return count;
    }   
    
};