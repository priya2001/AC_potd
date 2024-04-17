class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto &word:words)
        {
            if(word==string(rbegin(word),rend(word)))  //STL FUNCTION USE SOLVE THE QUES
            {
                return word;
            }
        }
        return "";
    }
      
};