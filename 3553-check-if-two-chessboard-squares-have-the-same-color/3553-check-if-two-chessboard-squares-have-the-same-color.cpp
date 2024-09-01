class Solution {
public:
    bool squareiswhite(string c)
    {
        int row=c[1]-'1';
        int col=c[0]-'a';
        return (row+col)%2==0;
    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return squareiswhite(coordinate1)==squareiswhite(coordinate2);
    }
};