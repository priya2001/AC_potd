class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //approach 1
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    return ans;
                }
            }
            ans=ans+strs[0][i];
        }
        return ans;
    }
};