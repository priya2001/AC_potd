class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        int n = energyDrinkA.size();
        
        // Initial values for the first hour
        long long dp0 = energyDrinkA[0]; // dp[0][0]
        long long dp1 = energyDrinkB[0]; // dp[0][1]
        
        for (int i = 1; i < n; i++) {
            long long newDp0 = max(dp0 + energyDrinkA[i], dp1);
            long long newDp1 = max(dp1 + energyDrinkB[i], dp0);
            
            dp0 = newDp0;
            dp1 = newDp1;
        }
        
        // The maximum boost we can get after n hours
        return max(dp0, dp1);
    }
};