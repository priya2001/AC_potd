class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                          //approach 1
        // string ans="";
        // for(int i=0;i<strs[0].size();i++)
        // {
        //     for(int j=0;j<strs.size()-1;j++)
        //     {
        //         if(strs[j][i]!=strs[j+1][i])
        //         {
        //             return ans;
        //         }
        //     }
        //     ans=ans+strs[0][i];
        // }
        // return ans;
        
                              //approach 2
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i])
            {
                return ans;
            }
            ans=ans+first[i];
        }
        return ans;
    }
};