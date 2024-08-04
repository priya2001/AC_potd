/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       if (!root) return {};  // Early exit if root is null

        vector<vector<int>> result;
        queue<TreeNode*> q;
        bool leftToRight = true;
        
        q.push(root);

        while (!q.empty()) {
            int size = q.size();//size of queue
            vector<int> ans(size);
            // level process
            for (int i = 0; i < size; i++) {
                TreeNode* frontNode = q.front();
                q.pop();
                 //normal insert or reverse insert
                int index = leftToRight ? i : size - 1 - i;
                ans[index] = frontNode->val;

                if (frontNode->left) {
                    q.push(frontNode->left);
                }
                if (frontNode->right) {
                    q.push(frontNode->right);
                }
            }
            //direction change krne ke liye
            leftToRight = !leftToRight;
            result.push_back(ans);
        }

        return result;
       
    }
};