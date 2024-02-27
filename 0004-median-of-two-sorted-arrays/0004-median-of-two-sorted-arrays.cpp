class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //  vector<int> vec;
        // int i =0,j=0;
        // while(i<nums1.size() && j<nums2.size()){
        //     if(nums1[i]<nums2[j]){
        //         vec.push_back(nums1[i++]);
        //     }
        //     else{
        //         vec.push_back(nums2[j++]);
        //     }
        // }
        // while(i<nums1.size()){
        //     vec.push_back(nums1[i++]);
        // }
        // while(j<nums2.size()){
        //     vec.push_back(nums2[j++]);
        // }
        // int mid = vec.size()/2;
        // if(vec.size()%2==0){
        //     return(vec[mid-1] +vec[mid])/2.0;
        // }
        // else{
        //     return vec[mid];
        // }
        
        
        
         vector<int>v;
    
        for(auto num:nums1)   // O(n1)
            v.push_back(num);
        
        for(auto num:nums2)  // O(n2)
            v.push_back(num);
     
        sort(v.begin(),v.end());  // O(nlogn)
   
        int n=v.size();  // O(n)
        
         if(n % 2 != 0)
            return v[n/2];
        else
            return (v[n/2] + v[n/2-1])/2.00000;
    }
};