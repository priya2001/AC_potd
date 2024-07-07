class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int consumed=numBottles;
        int emptybottle=numBottles;

        while(emptybottle>=numExchange)
        {
            int extraBottle = emptybottle / numExchange;
            int remain = emptybottle % numExchange;
            
            consumed+=extraBottle;

            emptybottle=extraBottle+remain;
        }
        return consumed;
    }
};