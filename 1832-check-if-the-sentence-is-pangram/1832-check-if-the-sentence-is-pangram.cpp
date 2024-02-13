class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count[26]={0};
        int index;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]>='a'&&sentence[i]<='z')
            {
                index=sentence[i]-'a';
                count[index]=1;  
            }
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};