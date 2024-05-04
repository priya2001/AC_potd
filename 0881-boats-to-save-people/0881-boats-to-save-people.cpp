class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(begin(people),end(people));
        
        int n=people.size();
        int i=0,j=n-1;
        int boats=0;
        
        while(i<=j)
        {
            if(people[i]+people[j]<=limit)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }
            boats++;
        }
        return boats;
    }
};