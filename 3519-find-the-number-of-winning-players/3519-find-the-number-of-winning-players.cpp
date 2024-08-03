class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
         unordered_map<int, unordered_map<int, int>> playerCount;
        for (auto& p : pick) 
        {
            int player = p[0];
            int color = p[1];
            playerCount[player][color]++;
        }
        
        int winP = 0;
        for (int i = 0; i < n; i++) 
        {
            for (auto& it : playerCount[i]) 
            {
                if (it.second > i) 
                {
                    winP++;
                    break;
                }
            }
        }
        
        return winP;
    }
};