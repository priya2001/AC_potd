class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        int n=intervals.size();
        int count=0;
        int i=0,j=1;

        while(j<n)
        {
            vector<int>Cur_intervals=intervals[i];
            vector<int>Next_intervals=intervals[j];

            int cs=Cur_intervals[0];
            int ce=Cur_intervals[1];

            int ns=Next_intervals[0];
            int ne=Next_intervals[1];

            if(ce<=ns) //No overlapping
            {
                i=j;
                j++;
                
            }
            else if(ce<=ne) //overlapping
            {
               j++;
               count++;
            }
            else if(ce>=ne) //overlapping
            {
              i=j;
              j++;
              count++;
            }
        }
        return count;
    }
};