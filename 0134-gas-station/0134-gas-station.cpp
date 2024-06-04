//Approach (Greedy O(n)) : Accepted
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int Tgas=accumulate(begin(gas),end(gas),0);
        int Tcost=accumulate(begin(cost),end(cost),0);
        if(Tgas<Tcost)
        {
            return -1;
        }
        
        int total=0;
        int result=0;
        for(int i=0;i<n;i++)
        {
           total=total+gas[i]-cost[i];
           if(total<0)
           {
             result=i+1;
             total=0;
           }
        }
        return result;
    }
};