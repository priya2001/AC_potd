class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int rank=1;
        vector<int>v=arr;
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(v[i])==mp.end())
            {
                mp[v[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};