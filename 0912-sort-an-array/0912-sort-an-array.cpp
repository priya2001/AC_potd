// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) 
//     {
//          //using sort function
//         // sort(nums.begin(),nums.end());
//         // return nums;
        
//         int n=nums.size();
//         mergeSort(nums,n);
//         return nums;
        
        
//     }
      
//     void mergeSort(vector<int> &A, int n)
//     {
//         if (n < 2)
//             return;
//         int mid = n / 2;
//         vector<int> L;
//         vector<int> R;

//         for (int i = 0; i < n; i++)
//         {
//             if (i < mid)
//             {
//                 L.push_back(A[i]);
//             }
//             else
//             {
//                 R.push_back(A[i]);
//             }
//         }
//         mergeSort(L, L.size());
//         mergeSort(R, R.size());
//         mergeArrays(A, L, R);
//     }

//     void mergeArrays(vector<int> &A, vector<int> &L, vector<int> &R)
//     {

//         int sizeL = L.size();
//         int sizeR = R.size();
//         int i = 0, j = 0, k = 0;

//         while (i < sizeL && j < sizeR)
//         {
//             if (L[i] <= R[j])
//             {
//                 A[k] = L[i];
//                 i++;
//             }
//             else
//             {
//                 A[k] = R[j];
//                 j++;
//             }
//             k++;
//         }
//         while (i < sizeL)
//         {
//             A[k] = L[i];
//             i++;
//             k++;
//         }
//         while (j < sizeR)
//         {
//             A[k] = R[j];
//             j++;
//             k++;
//         }
//     }
// };


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto &it:nums)
        {
            mp[it]++;
        }
        
        int i=0;
        int minE=*min_element(begin(nums),end(nums));
        int maxE=*max_element(begin(nums),end(nums));
        
        for(int num=minE;num<=maxE;num++)
        {
            while(mp[num]>0)
            {
                nums[i]=num;
                i++;
                mp[num]--;
            }
        }
        return nums;
    }
};