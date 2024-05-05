class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       vector<int>arr(101);
        
        int maxfreq=0;
        int total;
        
        for(auto &num:nums)
        {
            arr[num]++;
            
            int freq=arr[num];
            if(freq>maxfreq)
            {
                maxfreq=freq;
                total=freq;
            }
            else if(freq==maxfreq)
            {
                total=total+freq;
            }
        }
        return total;
    }
};