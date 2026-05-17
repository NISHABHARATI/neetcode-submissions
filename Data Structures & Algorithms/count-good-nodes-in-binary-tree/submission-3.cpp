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
    int ans = 0;
    void solution(TreeNode* root,int maxi){
        if(root == nullptr)return ;
        int temp = max(maxi,root->val);
        solution(root->left,temp);
        solution(root->right,temp);
        if(root->val >= temp)ans++;
    }
    int goodNodes(TreeNode* root) {
        solution(root,INT_MIN);
        return ans;
    }
};
