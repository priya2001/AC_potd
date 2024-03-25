class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> duplicates;
       map<int, bool> seen;

        for (int num : nums)
        {
            if (seen[num])
            {
               duplicates.push_back(num);
            } 
            else 
            {
                seen[num] = true;
            }
        }

           return duplicates;
        
    }
};