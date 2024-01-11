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
    
    int solve(TreeNode * root,int maxN,int minN){
        
        //base case
        if(root==NULL) return 0;
        
        //get max diff at any level
        maxN=max(maxN,root->val);
        minN=min(minN,root->val);
        
        //check diff
        int ans=abs(maxN - minN);
        
        //traverse
        int left=solve(root->left,maxN,minN);
        int right=solve(root->right,maxN,minN);
        
        return max(ans,max(left,right));
        
    } 
    
    int maxAncestorDiff(TreeNode* root) {
        
        return solve(root,root->val,root->val);
    }
};