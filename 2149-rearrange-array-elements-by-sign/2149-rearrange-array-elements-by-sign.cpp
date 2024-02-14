class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p,n;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                n.push_back(nums[i]);
            }
            else
            {
                p.push_back(nums[i]);
            }
        }
        vector<int>ans;
        int P=0,N=0;
        for(int i=0;i<nums.size();i++)
        {
           if(i%2==0)
           {
               ans.push_back(p[P]);
               P++;
           }
            else
            {
                ans.push_back(n[N]);
                N++;
            }
        }
        return ans;
        
    }
};