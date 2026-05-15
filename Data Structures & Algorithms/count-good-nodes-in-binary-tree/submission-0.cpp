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
    int count = 0;
    void func(TreeNode* root,int maxValueTillNow){
        if(root == nullptr) return;
        if(root->val >= maxValueTillNow){
            count++;
        }
        maxValueTillNow=max(maxValueTillNow,root->val);
        func(root->left,maxValueTillNow);
        func(root->right,maxValueTillNow);
    }
    int goodNodes(TreeNode* root) {
         func(root ,INT_MIN);
         return count;
    }
};
