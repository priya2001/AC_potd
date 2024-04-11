class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int m = matrix.size();
        if (m == 0) return false; // Empty matrix
        
        int n = matrix[0].size();
        if (n == 0) return false; // Empty row
        
        // Start from top-right corner
        int row = 0, col = n - 1;
        
        while (row < m && col >= 0)
        {
            if (matrix[row][col] == target)
            {
                return true; // Found target
            } 
            else if (matrix[row][col] < target)
            {
                row++; // Move down (because elements in the current column are smaller)
            }
            else
            {
                col--; // Move left (because elements in the current row are larger)
            }
        }
        
        return false; // Target not found
    }
};