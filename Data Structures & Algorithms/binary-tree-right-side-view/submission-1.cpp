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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr)return {};
        queue<TreeNode*>q;
        vector<int>vec;
        q.push(root);
        while(!q.empty()){
            int k = q.size();
            bool flag = true;
            for(int i=0;i<k;i++)
            {
                TreeNode* num = q.front();
                q.pop();
                if(num->right)q.push(num->right);
                if(num->left)q.push(num->left);
                if(flag==true){
                vec.push_back(num->val);
                flag =false;
                }

            }
        }
        return vec;
    }
};
