class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        int n=arr.size();
        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int count=0;
       multimap<int,int>mm;
        for(auto it:mp)
        {
            mm.insert({it.second,it.first});
        }
        for(auto it=mm.begin();it!=mm.end();it++)
        {
            k=k-it->first;
            if(k<0)
            {
                return mm.size()-count;
            }
            else
            {
                count++;
            }
        }
        return 0;
    }
};