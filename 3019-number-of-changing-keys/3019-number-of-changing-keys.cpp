class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            if(i>0&&s[i]!=s[i-1])
            {
                ans++;
            }
        }
        return ans;
    }
};