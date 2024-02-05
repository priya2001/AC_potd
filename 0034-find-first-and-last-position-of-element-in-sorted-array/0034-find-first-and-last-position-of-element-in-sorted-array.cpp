class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occurance(nums,target);
        int last=last_occurance(nums,target);
        vector<int> occurance;
        occurance.push_back(first);
        occurance.push_back(last);
        return occurance;
        
    }
    int first_occurance(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int left_unsure=-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                left_unsure = mid;
                high = mid - 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return left_unsure;
    }
    int last_occurance(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int right_unsure=-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                right_unsure = mid;
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return right_unsure;
        
    }
};