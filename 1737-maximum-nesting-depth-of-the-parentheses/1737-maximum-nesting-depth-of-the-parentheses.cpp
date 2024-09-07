class Solution {
public:
    int maxDepth(string s) {
        int openBracket=0;
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                openBracket++;
            }
            else if(s[i]==')')
            {
                openBracket--;
            }
            result=max(result,openBracket);
        }
        return result;
    }
};