class Solution {
public:

    vector<int> findOccurrences(vector<int>& nums, int x) 
    {
    unordered_map<int, vector<int>> occurrences;
    for (int i = 0; i < nums.size(); ++i) 
    {
        occurrences[nums[i]].push_back(i);
    }
    return occurrences[x];
}
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
    vector<int> occurrences = findOccurrences(nums, x);
    vector<int> answer;
    for (int q : queries) 
    {
        if (q <= occurrences.size()) 
        {
            answer.push_back(occurrences[q - 1]);
        } else 
        {
            answer.push_back(-1);
        }
    }
    return answer;
    }
};