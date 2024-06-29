class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int count=0;
        int maxi=0;
        while(j<s.size())
        {
             // Check if s[j] is a vowel and increment count
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            {
                count++;
            }
            // Check if window size is exactly k
            if(j-i+1==k)
            {
                maxi=max(maxi,count);
                // Remove the effect of s[i] from count
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    count--;
                }
                // Slide the window
                i++;
            }
            // Move the right side of the window
            j++;
        }
        return maxi;
    }
};