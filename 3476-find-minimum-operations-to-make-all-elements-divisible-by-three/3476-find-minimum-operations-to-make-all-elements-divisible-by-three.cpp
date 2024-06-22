class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0;
        for(int i=0;i<nums.size();i++)
        {
            int r=nums[i]%3;
            if(r==1)
            {
                operation++;
            }
            else if(r==2)
            {
                operation++;
            }
        }
        return operation;
    }
};