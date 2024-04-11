//Using simple Monotonic Nature of Numbers
//T.C : O(n)
//S.C : O(1) - I am ignoring the space taken for result variable

class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string result = ""; //it will act like a stack
        int n = num.length();
        
        for(int i = 0; i < n; i++) {
            
            while(result.length() > 0 && result.back() > num[i] && k > 0) {
                result.pop_back();
                k--;
            }
            
            if(result.length() > 0 || num[i] != '0') {
                result.push_back(num[i]); //to avoid the case when we have preceeding zeros
            }
            
        }
        
        // when number is already increasing order  then 
        //test case: num="12345"  k=2       
        // output : 123
        while(result.length() > 0 && k > 0) {
            result.pop_back();
            k--;
        }

        // test case :  num="10"  k=2 
        // output: 0
        if(result == "") {
            return "0";
        }
        
        return result;
        
    }
};


