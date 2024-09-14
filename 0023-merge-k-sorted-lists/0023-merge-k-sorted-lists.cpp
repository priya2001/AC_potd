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
    ListNode* MergeList(ListNode* l1,ListNode* l2)
    {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        if(l1->val<=l2->val)
        {
            l1->next=MergeList(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next=MergeList(l1,l2->next);
            return l2;
        }
    }
    ListNode* partitionMerge(int start,int end,vector<ListNode*>& lists)
    {
        if(start>end)return NULL;
        if(start==end) return lists[start];

        int mid=start+(end-start)/2;
        ListNode *l1=partitionMerge(start,mid,lists);
        ListNode *l2=partitionMerge(mid+1,end,lists);

        return MergeList(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        return partitionMerge(0,n-1,lists);
    }
};