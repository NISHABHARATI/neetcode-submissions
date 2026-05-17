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
    int solution(TreeNode* root,int &ans){
        if(root == nullptr)return 0;
        int rootval= root->val;
        ans = max(rootval,max(ans,solution(root->left,ans)+solution(root->right,ans)+rootval));
        return max(max(solution(root->left,ans),solution(root->right,ans)),0)+rootval;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        return max(ans,solution(root,ans));
    }
};
