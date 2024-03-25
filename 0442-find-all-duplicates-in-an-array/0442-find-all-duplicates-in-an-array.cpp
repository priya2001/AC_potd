class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
//******************** brute force approach o(n) time and space complexity  ********************
//        vector<int> duplicates;
//        map<int, bool> seen;

//         for (int num : nums)
//         {
//             if (seen[num])
//             {
//                duplicates.push_back(num);
//             } 
//             else 
//             {
//                 seen[num] = true;
//             }
//         }

//            return duplicates;
        
        // ******************************log(n) complexity**********************
        
        sort(nums.begin(),nums.end());
        vector<int>res;
         for(int i=0;i<nums.size()-1;i++)
            {
               if(nums[i]==nums[i+1])
                        {
                          res.push_back(nums[i]);
                        }
            }
           return res;
    }
};