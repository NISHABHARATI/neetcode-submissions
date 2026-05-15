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
    void func(vector<int>&ans,TreeNode* root){
        if(root==nullptr)return;
        ans.push_back(root->val);
            func(ans,root->left);
            func(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        func(ans,root);
        return ans;
    }
};