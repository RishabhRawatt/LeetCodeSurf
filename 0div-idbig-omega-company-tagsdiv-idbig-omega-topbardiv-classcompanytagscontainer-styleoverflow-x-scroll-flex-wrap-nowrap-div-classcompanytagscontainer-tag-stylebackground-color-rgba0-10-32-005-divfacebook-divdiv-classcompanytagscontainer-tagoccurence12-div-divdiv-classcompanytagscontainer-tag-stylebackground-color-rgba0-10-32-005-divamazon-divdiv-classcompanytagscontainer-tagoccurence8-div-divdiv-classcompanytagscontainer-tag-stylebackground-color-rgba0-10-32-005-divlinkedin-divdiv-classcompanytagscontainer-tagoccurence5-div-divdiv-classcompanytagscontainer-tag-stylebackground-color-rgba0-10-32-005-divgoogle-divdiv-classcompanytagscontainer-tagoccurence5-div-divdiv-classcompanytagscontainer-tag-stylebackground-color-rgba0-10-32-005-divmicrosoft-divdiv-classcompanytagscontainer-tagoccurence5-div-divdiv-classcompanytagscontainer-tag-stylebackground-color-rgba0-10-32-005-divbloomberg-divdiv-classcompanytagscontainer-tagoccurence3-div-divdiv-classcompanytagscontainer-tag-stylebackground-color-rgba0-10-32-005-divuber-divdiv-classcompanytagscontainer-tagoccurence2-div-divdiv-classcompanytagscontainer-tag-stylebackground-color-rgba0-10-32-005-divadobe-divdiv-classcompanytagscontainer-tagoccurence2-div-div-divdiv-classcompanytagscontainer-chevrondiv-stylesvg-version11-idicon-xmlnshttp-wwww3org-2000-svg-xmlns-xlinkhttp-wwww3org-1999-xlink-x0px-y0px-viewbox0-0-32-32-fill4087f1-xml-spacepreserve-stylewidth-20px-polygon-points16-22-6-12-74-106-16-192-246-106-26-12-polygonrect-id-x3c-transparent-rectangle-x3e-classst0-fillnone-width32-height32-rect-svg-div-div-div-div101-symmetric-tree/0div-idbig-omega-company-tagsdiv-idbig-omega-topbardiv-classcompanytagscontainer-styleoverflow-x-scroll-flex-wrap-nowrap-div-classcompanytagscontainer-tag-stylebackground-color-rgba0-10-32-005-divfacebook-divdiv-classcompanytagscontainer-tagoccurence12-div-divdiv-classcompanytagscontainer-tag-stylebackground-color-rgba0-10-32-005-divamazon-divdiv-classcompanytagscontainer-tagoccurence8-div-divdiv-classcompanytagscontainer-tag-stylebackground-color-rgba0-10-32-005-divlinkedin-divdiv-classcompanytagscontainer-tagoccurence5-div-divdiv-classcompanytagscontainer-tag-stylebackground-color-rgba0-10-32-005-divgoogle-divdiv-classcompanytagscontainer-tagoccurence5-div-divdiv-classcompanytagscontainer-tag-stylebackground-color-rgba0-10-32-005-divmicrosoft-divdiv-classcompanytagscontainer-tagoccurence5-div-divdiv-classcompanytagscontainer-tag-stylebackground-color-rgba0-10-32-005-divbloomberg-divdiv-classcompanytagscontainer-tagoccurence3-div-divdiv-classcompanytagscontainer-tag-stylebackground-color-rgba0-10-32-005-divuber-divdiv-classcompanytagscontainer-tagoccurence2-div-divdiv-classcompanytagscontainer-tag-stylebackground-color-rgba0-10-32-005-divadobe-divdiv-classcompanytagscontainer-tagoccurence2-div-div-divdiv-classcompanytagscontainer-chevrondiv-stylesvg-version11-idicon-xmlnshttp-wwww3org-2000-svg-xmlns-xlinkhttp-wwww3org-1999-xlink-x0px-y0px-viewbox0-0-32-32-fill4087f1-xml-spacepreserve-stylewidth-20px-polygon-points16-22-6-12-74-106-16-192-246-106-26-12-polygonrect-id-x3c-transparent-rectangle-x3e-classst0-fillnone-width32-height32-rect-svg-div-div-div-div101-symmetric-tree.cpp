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
    
    bool isSymmetrical(TreeNode * Nodeleft ,TreeNode * Noderight){
        
        if(Nodeleft==NULL || Noderight==NULL)
            //this return true if both null else false
            return Nodeleft==Noderight;
        
        if(Nodeleft->val != Noderight->val) return false;
        
        return isSymmetrical(Nodeleft->right,Noderight->left) && isSymmetrical(Nodeleft->left ,Noderight->right);
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true;
        
        else
           return isSymmetrical(root->left,root->right);
    }
};