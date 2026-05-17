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
map<TreeNode*,int>dp;
    int solution(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        if(dp.count(root))return dp[root];
        //picked
        int sum = root->val;
        if(root->left)
        sum += solution(root->left->left)+solution(root->left->right);
        if(root->right)
        sum += solution(root->right->left)+solution(root->right->right);
        // non pick
        int sum2 = solution(root->left)+solution(root->right);
        return dp[root] = max(sum,sum2);
    }
    int rob(TreeNode* root) {
        return solution(root);
    }
};