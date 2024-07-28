class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singalDigit=0;
        int doubleDigit=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            {
                singalDigit=singalDigit+nums[i];
            }
            else
            {
                doubleDigit=doubleDigit+nums[i];
            }
        }
        if(singalDigit>doubleDigit||doubleDigit>singalDigit)
        {
            return true;
        }
        return false;

    }
};