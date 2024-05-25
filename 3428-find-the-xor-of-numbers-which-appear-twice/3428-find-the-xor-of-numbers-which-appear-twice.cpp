class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

      unordered_map<int, int> count;
        for (int num : nums) 
        {
            count[num]++;
        }
        
        int xorResult = 0;
        for (auto& pair : count) 
        {
            if (pair.second == 2) 
            {
                xorResult ^= pair.first;
            }
        }
        
        return xorResult;
        
    }
};