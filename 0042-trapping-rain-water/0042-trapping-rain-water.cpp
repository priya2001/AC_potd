 // Company Tags : Accolite, Adobe, Amazon, D-E-Shaw, MakeMyTrip, Microsoft, Payu

class Solution {
public:
    vector<int>getLeftmaxArray(vector<int>&height,int &n)
    {
        vector<int>leftMax(n);
        leftMax[0]=height[0];
        for(int i=1;i<n;i++)
        {
            leftMax[i]=max(leftMax[i-1],height[i]);
        }
        return leftMax;
    }
    
      vector<int>getRightmaxArray(vector<int>&height,int &n)
    {
        vector<int>RightMax(n);
        RightMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            RightMax[i]=max(RightMax[i+1],height[i]);
        }
        return RightMax;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        
        if(n == 1 || n == 0)return 0;
        
        vector<int>leftMAX=getLeftmaxArray(height,n);
        vector<int>rightMAX=getRightmaxArray(height,n);
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(min(leftMAX[i],rightMAX[i])-height[i]);
        }
        return sum;
        
    }
};