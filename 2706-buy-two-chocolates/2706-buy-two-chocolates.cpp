class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int Prices=prices[0]+prices[1];
        if(Prices<=money)
        {
            return money-Prices;
        }
        return money;
    }
};