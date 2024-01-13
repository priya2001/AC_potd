class Solution {
public:
    bool isPalindrome(string s) {
        string temp,ans;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                temp.push_back(s[i]);
            }
        }
        ans=temp;
        reverse(ans.begin(),ans.end());
        if(ans==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};