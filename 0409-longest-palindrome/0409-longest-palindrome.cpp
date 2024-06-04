//usig set 
//T.C : O(n)
//S.C : O(n)
class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_set<int>st;
       
        int result=0;
        for(auto &ch:s)
        {
            if(st.count(ch)) 
            //check ch in present in st.
            // agr hai to result mai 2 count krke erase krke hai.
            {
                result+=2;
                st.erase(ch);
            }
            else
            {
                st.insert(ch);
            }
        }
        if(!st.empty())
        {
            result++;
        }

        return result;

    }
};