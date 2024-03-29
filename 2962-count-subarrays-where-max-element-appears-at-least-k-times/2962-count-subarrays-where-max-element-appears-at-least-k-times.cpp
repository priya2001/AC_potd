/* 
We will use sliding window method. We will go to every index and will count the number of valid subaaray ending on that index(This intution will help in most of the ques which involve finding subaarays)

Approach
We will find the maximum element of array and stored in maxi.
We will declare two pointer left and right.
Increase the right pointer till we reach the index where frequency of maxi is equal to k.
Now we will find the number of subarray ending on that index.
We will start removing element from left and after removal of each element we will get new subarray and we will continue to do so till our condition is satisfied (frequency of maxi is k) 
*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        long long ans = 0;
        int left =0;
        int right = 0;
        int freq = k;
        while(right<n){
            if(nums[right]==maxi) freq--; // counting the frequency of maxi.
            while(freq==0){ //  
                if(nums[left]==maxi) freq++;
                left++;
 // In this loop we are removing element from left and will stop 
 // when we encounter maxi (because removing further will decrease
 // the frequency of maxi in our subarray)
            }

            ans = ans+left; // number of subarray ending on right index
            right++;
        }
        return ans;
    }
};

/* Complexity
Time complexity:
0(n), where n is size of nums

Space complexity:
0(1), only constant space is used
*/