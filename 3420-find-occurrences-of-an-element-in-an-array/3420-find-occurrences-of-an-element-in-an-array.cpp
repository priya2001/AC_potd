class Solution {
public:

    vector<int> findOccurrences(vector<int>& nums, int x) 
    {
    unordered_map<int, vector<int>> occur;
    for (int i = 0; i < nums.size(); ++i) 
    {
        occur[nums[i]].push_back(i);
    }
    return occur[x];
}
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
    vector<int> occur = findOccurrences(nums, x);
    vector<int> answer;
    for (int q : queries) 
    {
        if (q <= occur.size()) 
        {
            answer.push_back(occur[q - 1]);
        } else 
        {
            answer.push_back(-1);
        }
    }
    return answer;
    }
};