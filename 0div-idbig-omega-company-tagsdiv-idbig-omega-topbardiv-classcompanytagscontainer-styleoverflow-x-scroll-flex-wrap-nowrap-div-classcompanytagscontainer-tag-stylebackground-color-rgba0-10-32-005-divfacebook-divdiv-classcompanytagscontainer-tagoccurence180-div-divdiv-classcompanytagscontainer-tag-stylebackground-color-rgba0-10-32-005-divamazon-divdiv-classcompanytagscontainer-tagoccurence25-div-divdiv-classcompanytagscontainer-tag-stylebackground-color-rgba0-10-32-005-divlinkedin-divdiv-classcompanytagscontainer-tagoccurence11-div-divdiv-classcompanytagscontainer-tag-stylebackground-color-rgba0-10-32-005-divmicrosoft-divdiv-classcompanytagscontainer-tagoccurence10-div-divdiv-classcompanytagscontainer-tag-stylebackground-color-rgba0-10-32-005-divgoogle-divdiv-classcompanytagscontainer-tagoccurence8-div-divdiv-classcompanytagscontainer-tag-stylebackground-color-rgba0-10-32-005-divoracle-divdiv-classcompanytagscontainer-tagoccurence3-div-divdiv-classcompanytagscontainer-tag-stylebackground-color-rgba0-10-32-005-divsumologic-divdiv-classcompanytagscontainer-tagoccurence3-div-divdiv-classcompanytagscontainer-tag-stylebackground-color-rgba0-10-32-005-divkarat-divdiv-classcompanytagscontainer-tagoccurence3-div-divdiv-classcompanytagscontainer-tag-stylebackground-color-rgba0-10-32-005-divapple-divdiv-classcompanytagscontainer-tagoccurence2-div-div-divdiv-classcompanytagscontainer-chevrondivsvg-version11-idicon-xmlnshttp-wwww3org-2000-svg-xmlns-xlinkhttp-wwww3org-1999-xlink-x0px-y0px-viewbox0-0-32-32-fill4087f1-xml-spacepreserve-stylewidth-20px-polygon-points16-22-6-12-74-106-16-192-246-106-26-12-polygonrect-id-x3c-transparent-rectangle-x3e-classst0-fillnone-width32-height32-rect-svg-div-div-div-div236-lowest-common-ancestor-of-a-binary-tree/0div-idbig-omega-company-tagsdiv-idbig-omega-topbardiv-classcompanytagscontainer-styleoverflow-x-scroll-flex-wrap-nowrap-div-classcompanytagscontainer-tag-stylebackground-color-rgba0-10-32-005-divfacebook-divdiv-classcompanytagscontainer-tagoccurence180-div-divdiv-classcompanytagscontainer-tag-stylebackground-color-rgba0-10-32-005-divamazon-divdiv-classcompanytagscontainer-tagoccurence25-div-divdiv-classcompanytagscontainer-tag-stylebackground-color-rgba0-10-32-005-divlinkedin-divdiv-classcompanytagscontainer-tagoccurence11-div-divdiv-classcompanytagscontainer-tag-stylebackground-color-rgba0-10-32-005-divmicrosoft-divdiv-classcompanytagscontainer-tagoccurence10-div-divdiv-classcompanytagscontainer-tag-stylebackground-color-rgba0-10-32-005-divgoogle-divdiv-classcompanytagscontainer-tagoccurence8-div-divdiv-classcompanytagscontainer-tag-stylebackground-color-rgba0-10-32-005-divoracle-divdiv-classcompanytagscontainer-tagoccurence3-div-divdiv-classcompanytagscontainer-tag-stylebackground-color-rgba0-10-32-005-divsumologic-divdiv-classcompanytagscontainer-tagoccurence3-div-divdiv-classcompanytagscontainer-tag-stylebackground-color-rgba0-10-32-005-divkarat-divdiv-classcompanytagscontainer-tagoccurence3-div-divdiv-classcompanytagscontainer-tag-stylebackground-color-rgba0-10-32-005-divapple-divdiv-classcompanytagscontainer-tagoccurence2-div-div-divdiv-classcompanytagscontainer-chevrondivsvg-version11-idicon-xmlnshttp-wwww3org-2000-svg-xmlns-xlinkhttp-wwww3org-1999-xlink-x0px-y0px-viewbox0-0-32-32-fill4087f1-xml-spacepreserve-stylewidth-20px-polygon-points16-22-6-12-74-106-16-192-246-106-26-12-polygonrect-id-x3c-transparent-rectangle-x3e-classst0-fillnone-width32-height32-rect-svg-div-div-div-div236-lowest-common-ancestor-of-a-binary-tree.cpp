/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
        //base case
        if(root==NULL || root==p || root==q) return root;
        
        //go left and right
        TreeNode * left=lowestCommonAncestor(root->left,p,q);
        TreeNode * right=lowestCommonAncestor(root->right,p,q);
        
        //check if left null then we need right one
        if(left==NULL) return right;
        //vice versa
        else if(right==NULL) return left;
        //if none (left or right)null that means we found both p and q then return root
        else return root;
        


        
        
    }
};