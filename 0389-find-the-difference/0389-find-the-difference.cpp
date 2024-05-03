class Solution {
public:
    char findTheDifference(string s, string t) {
        /********************* Approach-1 ***************************/
        // int XOR=0;
        // for(auto &ch:s)
        // {
        //     XOR=XOR^ch;
        // }
        // for(auto &ch:t)
        // {
        //     XOR=XOR^ch;
        // }
        // return char(XOR);
        /********************* Approach-2 ***************************/
//         unordered_map<char, int> mp;
        
//         for(char &ch : s) {
//             mp[ch]++;
//         }
        
//         for(char &ch : t) {
//             mp[ch]--;
            
//             if(mp[ch] < 0)
//                 return ch;
//         }
        
//         return 'a'; //send any random. It will never reach here
        
                /********************* Approach-2 ***************************/
           int sum = 0;
        
        for (char &ch: t)
        {
            sum += ch;
        }
        
        for (char &ch: s)
        { 
            sum -=ch;
        }
        
        return (char)sum;
    }
};