class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int val=nums[0];
        // int count=1;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(count==0){
        //         val=nums[i];
        //         count=1;
        //     }
        //     else if(nums[i]==val){
        //         count++;
        //     }
        //     else
        //     {
        //         count--;
        //     }
        // }
        // return val;
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxifq=0;
        int maxielement=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>maxifq)
            {
                maxifq=it->second;
                maxielement=it->first;
            }
        }
        if(maxifq>n/2)
        {
            return maxielement;
        }
        else
        {
            return -1;
        }
        
    }
};