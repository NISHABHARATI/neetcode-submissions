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
int maxSum=0;
map<TreeNode*,int>dp;
int func(TreeNode* root){
    if(root == nullptr)return 0;
    if(dp.count(root)) return dp[root];
    //pick
    int maxSum = root->val;
    if(root->left){
        maxSum += func(root->left->left)+func(root->left->right);
    }
    if(root->right){
        maxSum += func(root->right->right)+func(root->right->left);
    }
    //not pick
    maxSum = max(maxSum,func(root->left)+func(root->right));
    return dp[root]=maxSum;


}
    int rob(TreeNode* root) {
       return func(root); 
    }
};