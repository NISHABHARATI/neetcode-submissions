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

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string str = "";
         if(root == nullptr) return "";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr == nullptr)str.append("#,");
            else
                str.append(to_string(curr->val)+',');
            if(curr){
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int len = data.length();
        if (len == 0) return nullptr;
        stringstream s(data);
        string str;
        getline(s,str,',');
            queue<TreeNode*>q;
            TreeNode* root = new TreeNode(stoi(str));
            q.push(root);
            while(!q.empty()){
                TreeNode* node = q.front();
                q.pop();
                getline(s,str,',');
                if(str == "#"){
                    node->left = nullptr;
                }
                else{
                    TreeNode* dummy = new TreeNode(stoi(str));
                    q.push(dummy);
                    node->left = dummy;
                }
                getline(s,str,',');
                 if(str == "#"){
                    node->right = nullptr;
                }
                else{
                    TreeNode* dummy = new TreeNode(stoi(str));
                    q.push(dummy);
                    node->right = dummy;
                }
            }
            return root;
    }
};
