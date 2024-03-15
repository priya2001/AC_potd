class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int preP= 1;
        for(int i = 0; i < n; i++) {
            res[i] = preP;
            preP= preP*nums[i];
        }
    
        int sufP = 1;
        for(int i = n - 1; i >= 0; i--) {
            res[i] = res[i]*sufP;
            sufP=sufP* nums[i];
        }

        return res;
    }
};