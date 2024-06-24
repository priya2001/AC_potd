class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {

    int minRow = INT_MAX, maxRow = INT_MIN;
    int minCol = INT_MAX, maxCol = INT_MIN;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                if (i < minRow) 
                {
                    minRow = i;
                }
                if (i > maxRow) 
                {
                    maxRow = i;
                }
                if (j < minCol) 
                {
                    minCol = j;
                }
                if (j > maxCol) 
                {
                    maxCol = j;
                }
            }
        }
    }
    
    // Calculate the height and width of the enclosing rectangle
    int height = maxRow - minRow + 1;
    int width = maxCol - minCol + 1;
    
    // Return the area
    return height * width;
        
    }
};