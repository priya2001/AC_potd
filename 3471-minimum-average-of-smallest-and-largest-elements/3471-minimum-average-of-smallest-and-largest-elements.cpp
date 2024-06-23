class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double>v;
        double avgs;
        
        while(!nums.empty())
        {
           int minE=nums.front();
           int maxE=nums.back();

           nums.erase(nums.begin());
           nums.pop_back();
 
           avgs=(minE+maxE)/2.0;
           v.push_back(avgs);
        }

        return *std::min_element(v.begin(),v.end());
        
    }
};