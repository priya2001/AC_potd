/* 
The problem requires finding the "judge" in a town where everyone trusts the judge, but the judge trusts no one. One way to approach this is to maintain two arrays, arr1 and arr2. arr1 keeps track of how many people each person trusts, and arr2 keeps track of how many people trust each person.

Approach->

Create two arrays, arr1 and arr2, both of size n+1 to account for the indices starting from 1.

Iterate through the given trust relationships and update the counts in arr1 and arr2.

After processing all trust relationships, iterate through the arrays and find the person who is trusted by everyone (trust count in arr1 is 0) and trusts no one (trust count in arr2 is n-1).4)

Return the index of the potential judge if found, otherwise return -1.

Complexity->

Time complexity:
O(n), where n is the number of people in the town. We iterate through the trust relationships once and then iterate through the arrays.

Space complexity:
O(n), as we use two arrays of size n+1.
*/


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>arr1(n+1);
        vector<int>arr2(n+1);
        for(int i = 0;i < trust.size();i++){
            arr1[trust[i][0]]++;   
            arr2[trust[i][1]]++;
        }
        for(int i = 1;i <= n;i++){
            if(arr1[i] == 0 && arr2[i] == n-1)
            {
                return i;
            }
        }
        return -1;
        
    }
};