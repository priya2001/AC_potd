class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);
    
        for (auto& edge : edges) 
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> subtree_size(n, 0);
        unordered_set<int> visited;
        int goodNodes = 0;
        
        function<int(int)> dfs = [&](int node) -> int 
        {
            visited.insert(node);
            int size = 1;
            unordered_map<int, int> child_sizes;
            for (auto &child : adj[node]) 
            {
                if (!visited.count(child)) 
                {
                    int child_size = dfs(child);
                    size += child_size;
                    child_sizes[child_size]++;
                }
            }
            
            if (child_sizes.size() <= 1) 
            {
                goodNodes++;
            }
            
            return subtree_size[node] = size;
        };
        
        dfs(0);
        
        return goodNodes;
    }
};