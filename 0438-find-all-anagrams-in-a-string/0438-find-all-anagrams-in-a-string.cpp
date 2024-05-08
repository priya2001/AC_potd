class Solution {
public:
    
     vector<int> findAnagrams(string s, string p) {
        
        int n=s.size();
        int m=p.size();
        vector<int>arr(26,0);
        
        //count the freq of p
       for(auto &ch:p)
       {
           arr[ch-'a']++;
       }
        
        int i=0,j=0;
        vector<int>result;
        int k=p.size();
        
        while(j<n)
        {
            arr[s[j]-'a']--;
            
            if(j-i+1==k)
            {
                if(arr==vector<int>(26,0))
                {
                    result.push_back(i);
                }
                arr[s[i]-'a']++;
                i++;
            }
            j++;
        }
        
        return result;
    }
};