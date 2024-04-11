class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //binary serach tc:log(m*n)
        
        int m=matrix.size();
        if(m == 0)return false;
        
        int n=matrix[0].size();
        
        int start=0;
        int end=m*n-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int r=mid/n; //divide by column
            int c=mid%n; //modulo by column
            if(matrix[r][c]==target)
            {
                return true;
            }
            else if(matrix[r][c]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return false;
    }
};