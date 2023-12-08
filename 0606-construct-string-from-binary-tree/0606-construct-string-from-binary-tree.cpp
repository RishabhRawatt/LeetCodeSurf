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
    
    void preorder(TreeNode * root , string &s){
        
        if(!root) return;
        
        s+=to_string(root->val);
        
        // no left no right
        if(!root->left && !root->right) return;
        
        //for left
        //we didnt check for left as we did in right because we have to put () if no left
        s.push_back('(');
        preorder(root->left,s);
        s.push_back(')');
        
        //for right
        if(root->right) s.push_back('(');
        preorder(root->right,s);
       if(root->right) s.push_back(')');
    
    }
    
    
    string tree2str(TreeNode* root) {
        string ans;
        preorder(root,ans);
        return ans;
    }
};