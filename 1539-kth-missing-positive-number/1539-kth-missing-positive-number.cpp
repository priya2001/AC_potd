class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        
        int n=arr.size();
        int i=0;
        
        while(i<n&&k>0)
        {
            if(arr[i]==num) //not missing
            {
                i++;
            }
            else
            {
                k--;
            }
            num++;
        }
        // arr=[1,2,3]  k=2
        while(k--)
        {
            num++;
        }
        return num-1;
    }
};