class Solution {
public:

    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>v; 
        for(auto &x:mp)
        {
            v.push({x.second,x.first});
        }
        string ans="";
        while(!v.empty())
        {
            auto it=v.top();
            v.pop();
            for(int i=0;i<it.first;i++)
            {
              ans+=it.second;
            }
        }
        return ans;
    }
};