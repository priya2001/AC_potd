class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        
        string result=string(n,'0');
        
        int i=0;
        for(auto &ch:s)
        {
            if(ch=='1')
            {
                if(result[n-1]=='1')// LSB='1' it to be odd Number
                {
                    result[i]='1';
                    i++;
                }
                else
                {
                    result[n-1]='1';
                }
            }
        }
        return result;
    }
};