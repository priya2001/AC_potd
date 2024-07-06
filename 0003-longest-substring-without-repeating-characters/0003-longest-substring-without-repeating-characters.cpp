class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        unordered_set<char>st;
        int l=0;
        int i=0;
        int j=0;
        while(j<n)
        {
            if(!st.count(s[j]))
            {
                st.insert(s[j]);
                l=max(l,int(st.size()));
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return l;
    }
};