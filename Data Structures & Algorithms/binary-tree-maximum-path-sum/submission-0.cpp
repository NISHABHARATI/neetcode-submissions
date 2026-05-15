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
int maxSum = INT_MIN;
    int func(TreeNode* root){
        if(root == nullptr)return 0;
        int left = func(root->left);
        int right = func(root->right);
        // maxSum = max(maxSum,root->val);
        maxSum = max(maxSum,left+right+root->val);
        if(root->val+max(left,right)>0)return root->val+max(left,right);
        else{
            return 0;
        }

    }
    int maxPathSum(TreeNode* root) {
        func(root);
        return maxSum;
    }
};
