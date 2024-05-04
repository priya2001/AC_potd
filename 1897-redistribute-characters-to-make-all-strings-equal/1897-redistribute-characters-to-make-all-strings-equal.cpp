class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        
        int count[26]={0};
       
        for(auto &word:words)
        {
             for(auto &ch:word)
               {
                   count[ch-'a']++;
               }
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]%n!=0)
            {
                return false;
            }
        }
        return true;
    }
};