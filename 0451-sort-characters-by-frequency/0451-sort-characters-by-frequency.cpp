class Solution {
public:
bool static comp(pair<char,int>&a,pair<char,int>&b)
{
    return a.second>b.second;
}
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<pair<char,int>>v;
        for(auto &x:mp)
        {
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),comp);
        string ans="";
        for(auto &it:v)
        {
            for(int i=0;i<it.second;i++)
            {
              ans+=it.first;
            }
        }
        return ans;
    }
};