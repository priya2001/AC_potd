class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>v;
        int check;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                check=nums[i]+nums[j];
                if(check==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }

       }
       return v;   
       
    }
};
        