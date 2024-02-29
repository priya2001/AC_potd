class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int size=mat.size();
        for(int i=0;i<size;i++)
        {
            sum=sum+mat[i][i];
            if(i!=size-1-i)
            {
                sum=sum+mat[i][size-1-i];
            }

        }
        return sum;
    }
};