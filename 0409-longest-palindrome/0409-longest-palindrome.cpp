class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();

        unordered_map<char,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        
        int result=0;
        int flag=0;
        for(auto &it:mp)
        {
            if(it.second%2==0)
            {
                result = result + it.second;
            }
            else
            {
                result = result + it.second -1;
                flag=1;
            }
        }
        if(flag==1)
        {
            result++;
        }

        return result;
    }
};