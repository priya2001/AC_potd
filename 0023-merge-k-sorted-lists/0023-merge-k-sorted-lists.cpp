/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoSortedList(ListNode *L1 ,ListNode *L2)
    {
        if(L1==NULL)return L2;
        if(L2==NULL)return L1;
        
        if(L1->val<=L2->val)
        {
            L1->next=mergeTwoSortedList(L1->next,L2);
            return L1;
        }
        else
        {
            L2->next=mergeTwoSortedList(L1,L2->next);
            return L2;
        }
    }
    ListNode *PartionAndMerge(int start,int end,vector<ListNode*>& lists)
    {
        if(start>end)return NULL;
        
        if(start==end)
        {
            return lists[start];
        }
        
        int mid =start+(end-start)/2;
        
        ListNode *L1=PartionAndMerge(start,mid,lists);
        ListNode *L2=PartionAndMerge(mid+1,end,lists);
        
        return mergeTwoSortedList(L1,L2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n=lists.size();
        
        return PartionAndMerge(0,n-1,lists);
        
    }
};