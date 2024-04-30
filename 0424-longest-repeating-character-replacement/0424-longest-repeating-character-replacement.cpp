class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> alphabets;
        int ans = 0;
        int i = 0;
        int j = 0;
        int maxf = 0;

        for (j = 0; j < s.size(); j++) {
            alphabets[s[j]] = 1 + alphabets[s[j]];
            maxf = max(maxf, alphabets[s[j]]);

            if ((j - i + 1) - maxf > k) {
                alphabets[s[i]] -= 1;
                i++;
            } else {
                ans = max(ans, (j - i + 1));
            }
        }

        return ans;
        
    }
};