class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        string result= string(n,'0');
        
        int CountOne=count(begin(s),end(s),'1');
        
       int i=0;
        while(CountOne>1)
        {
            result[i]='1';
            i++;
            CountOne--;
        }
        result[n-1]='1';
        return result;
    }
};