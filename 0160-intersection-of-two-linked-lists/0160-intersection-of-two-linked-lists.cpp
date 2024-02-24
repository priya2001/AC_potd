/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
// ------------------------------Appraoch-------------------------
//         L1=(m+x) + (n+x)  
//         L2=(n+x) + (m+x)
        
        ListNode *a=headA,*b=headB;
        while(a!=b)
        {
            if(a==NULL)a=headB;  
            else a=a->next;       
             
            if(b==NULL)b=headA;  
            else b=b->next;
        }
        return b;   //a or b both are same anyone return same answer given
    }
};

// Time Complexity: O(n + m)
// Space Complexity: O(1)