class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row=0,col=0;

        for(auto &str:commands)
        {
            if(str=="UP")
            {
                row--;
            }
            else if(str=="RIGHT")
            {
                col++;
            }
            else if(str=="DOWN")
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        return row*n+col;
    }
};