class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size();
       
       for(int i=n-1;i>=0;i--)
       {
          if(digits[i]!=9)
          {
            digits[i]++;
            return digits;// Return the updated digits immediately
          }
          else
          {
            digits[i]=0;
          }
       }
       // If the loop completes without returning, it means all digits were 9
       // In that case, we need to add an additional digit to the beginning of the array
       digits.insert(digits.begin(),1);
       return digits;
      
    }
};