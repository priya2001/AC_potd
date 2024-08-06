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
     // Function to find the position of a given element in the inorder array
    int findPosition(vector<int>& inorder, int element, int start, int end) {
        // Iterate over the inorder array from start to end
        for (int i = start; i <= end; i++) {
            // If the element is found, return its index
            if (element == inorder[i]) {
                return i;
            }
        }
        // If the element is not found, return -1
        return -1;
    }

    // Recursive function to construct the binary tree
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int n, int inorderStart, int inorderEnd, int &index) {
        // Base cases: if index is out of range or the inorder range is invalid
        if (index >= n || inorderStart > inorderEnd) {
            return NULL;
        }

        // Get the current element from preorder array and increment index
        int element = preorder[index++];
        // Create a new node with the current element
        TreeNode* root = new TreeNode(element);
        // Find the position of the current element in the inorder array
        int position = findPosition(inorder, element, inorderStart, inorderEnd);

        // Recursively build the left and right subtrees
        root->left = solve(preorder, inorder, n, inorderStart, position - 1, index);
        root->right = solve(preorder, inorder, n, position + 1, inorderEnd, index);

        // Return the constructed subtree
        return root;
    }

    // Function to build the tree from preorder and inorder arrays
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int index = 0;
        // Call the recursive function to build the tree
        TreeNode* ans = solve(preorder, inorder, n, 0, n - 1, index);
        // Return the constructed tree
        return ans;
    
    }
};