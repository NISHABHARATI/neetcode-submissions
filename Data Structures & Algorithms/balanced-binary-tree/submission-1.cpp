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
    bool flag = true;
    int solution(TreeNode* root){
        if(root == nullptr)return 0;
        int left = solution(root->left);
        int right = solution(root->right);
        int diff = abs(left-right);
        if(diff > 1)
        flag = false;
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
       solution(root);
       return flag;
    }
};
