class Solution {
public:
    int minimumLength(string s) {
        
        int start=0,end=s.size()-1; //s=start,e=end
        while(start<end){
            if(s[start]==s[end])
            {
                while(s[start]==s[start+1] && start<end)
                {
                    start++;
                }
                while(s[end]==s[end-1] && start<end)
                {
                    end--;
                }
                
                start++;
                end--;
            }
            else break;
        }
        int ans=end-start+1; //ans=remaining array length
        if(ans<0)
        {
            return 0;
        }
        return ans;
        
    }
};