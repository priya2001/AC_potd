class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
            
        int negatives = nums.size()-1;
        
        // change all negative numbers and numbers bigger than N 
		// (the amount of elements in the list)
        for (int i = nums.size()-1; i >= 0; i--){
            if (nums[i] <= 0 || nums[i] > nums.size()){
                nums[i] = nums.size()+1;
            }
        }
        
        int min = 1;
        
        // use nums[i] as the index and mark them off
        for (int i =0; i < nums.size(); i++){
            int index = abs(nums[i])-1;
            
            // check to see if it's within the bounds and indexable
			// and check to not tick off the same value twice
            if ((index < nums.size() && index >= 0) && nums[index] > 0){
                nums[index] = -nums[index];
            }
        }
        
        // first positive value not ticked off 
        for (min = 0; min < nums.size(); min++){
            if (nums[min] > 0){
                break;
            }
        }
        return min+1;
        
    }
};