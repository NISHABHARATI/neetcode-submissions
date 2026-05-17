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
int cnt = 0;
    int solution(TreeNode* root, int k){
       if(root == nullptr)return -1;
       //inorder traversal
       int left =  solution(root->left,k);
       if(left != -1)return left;
       cnt++;
        if(cnt==k){
        return root->val;
       }
       return solution(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
       return solution(root,k);
    }
};
