class Solution {
public:
    vector<vector<int>> dir{{-1,0},{1,0},{0,-1},{0,1}};
    #define pb push_back

    void bfs(int r1, int c1, vector<vector<bool>>& vis, vector<vector<int>>& land, int n, int m, vector<vector<int>>& group) {
        vis[r1][c1] = true;

        queue<pair<int,int>> q;
        
        pair<int,int> p = make_pair(r1, c1);

        q.push(p);

        // initialising ending co-ordinates with the starting co-ordinates because it is possible that the starting one only is the ending one
        int r2 = r1 , c2 = c1;

        // i somehow need the last ending co-ordinates
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            for(auto& d : dir) {
                int newRow = x + d[0];
                int newCol = y + d[1];

                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m) {
                    if(land[newRow][newCol] == 1 && !vis[newRow][newCol]) {
                        vis[newRow][newCol] = true;
                        pair<int,int> p = make_pair(newRow, newCol);
                        q.push(p);

                        r2 = max(r2, newRow);   
                        c2 = max(c2, newCol);
                        //why max? because the ending points' coordinates will obviously be greater than the starting coordinates as we keep exploring downwards/towards right/left/ upwards
                    }
                }
            }
        }
        
        group.pb({r1, c1, r2, c2});
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
       // 0 -> forested land
        // 1 -> farmland
        vector<vector<int>> group;

        int n = land.size() , m = land[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!vis[i][j] && land[i][j] == 1) {
                    bfs(i, j, vis, land, n, m, group);
                }
            }
        }

        return group;
    }
};