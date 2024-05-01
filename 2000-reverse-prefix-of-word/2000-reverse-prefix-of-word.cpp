class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        int j=word.find(ch); //given index
        
        while(i<j)
        {
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};