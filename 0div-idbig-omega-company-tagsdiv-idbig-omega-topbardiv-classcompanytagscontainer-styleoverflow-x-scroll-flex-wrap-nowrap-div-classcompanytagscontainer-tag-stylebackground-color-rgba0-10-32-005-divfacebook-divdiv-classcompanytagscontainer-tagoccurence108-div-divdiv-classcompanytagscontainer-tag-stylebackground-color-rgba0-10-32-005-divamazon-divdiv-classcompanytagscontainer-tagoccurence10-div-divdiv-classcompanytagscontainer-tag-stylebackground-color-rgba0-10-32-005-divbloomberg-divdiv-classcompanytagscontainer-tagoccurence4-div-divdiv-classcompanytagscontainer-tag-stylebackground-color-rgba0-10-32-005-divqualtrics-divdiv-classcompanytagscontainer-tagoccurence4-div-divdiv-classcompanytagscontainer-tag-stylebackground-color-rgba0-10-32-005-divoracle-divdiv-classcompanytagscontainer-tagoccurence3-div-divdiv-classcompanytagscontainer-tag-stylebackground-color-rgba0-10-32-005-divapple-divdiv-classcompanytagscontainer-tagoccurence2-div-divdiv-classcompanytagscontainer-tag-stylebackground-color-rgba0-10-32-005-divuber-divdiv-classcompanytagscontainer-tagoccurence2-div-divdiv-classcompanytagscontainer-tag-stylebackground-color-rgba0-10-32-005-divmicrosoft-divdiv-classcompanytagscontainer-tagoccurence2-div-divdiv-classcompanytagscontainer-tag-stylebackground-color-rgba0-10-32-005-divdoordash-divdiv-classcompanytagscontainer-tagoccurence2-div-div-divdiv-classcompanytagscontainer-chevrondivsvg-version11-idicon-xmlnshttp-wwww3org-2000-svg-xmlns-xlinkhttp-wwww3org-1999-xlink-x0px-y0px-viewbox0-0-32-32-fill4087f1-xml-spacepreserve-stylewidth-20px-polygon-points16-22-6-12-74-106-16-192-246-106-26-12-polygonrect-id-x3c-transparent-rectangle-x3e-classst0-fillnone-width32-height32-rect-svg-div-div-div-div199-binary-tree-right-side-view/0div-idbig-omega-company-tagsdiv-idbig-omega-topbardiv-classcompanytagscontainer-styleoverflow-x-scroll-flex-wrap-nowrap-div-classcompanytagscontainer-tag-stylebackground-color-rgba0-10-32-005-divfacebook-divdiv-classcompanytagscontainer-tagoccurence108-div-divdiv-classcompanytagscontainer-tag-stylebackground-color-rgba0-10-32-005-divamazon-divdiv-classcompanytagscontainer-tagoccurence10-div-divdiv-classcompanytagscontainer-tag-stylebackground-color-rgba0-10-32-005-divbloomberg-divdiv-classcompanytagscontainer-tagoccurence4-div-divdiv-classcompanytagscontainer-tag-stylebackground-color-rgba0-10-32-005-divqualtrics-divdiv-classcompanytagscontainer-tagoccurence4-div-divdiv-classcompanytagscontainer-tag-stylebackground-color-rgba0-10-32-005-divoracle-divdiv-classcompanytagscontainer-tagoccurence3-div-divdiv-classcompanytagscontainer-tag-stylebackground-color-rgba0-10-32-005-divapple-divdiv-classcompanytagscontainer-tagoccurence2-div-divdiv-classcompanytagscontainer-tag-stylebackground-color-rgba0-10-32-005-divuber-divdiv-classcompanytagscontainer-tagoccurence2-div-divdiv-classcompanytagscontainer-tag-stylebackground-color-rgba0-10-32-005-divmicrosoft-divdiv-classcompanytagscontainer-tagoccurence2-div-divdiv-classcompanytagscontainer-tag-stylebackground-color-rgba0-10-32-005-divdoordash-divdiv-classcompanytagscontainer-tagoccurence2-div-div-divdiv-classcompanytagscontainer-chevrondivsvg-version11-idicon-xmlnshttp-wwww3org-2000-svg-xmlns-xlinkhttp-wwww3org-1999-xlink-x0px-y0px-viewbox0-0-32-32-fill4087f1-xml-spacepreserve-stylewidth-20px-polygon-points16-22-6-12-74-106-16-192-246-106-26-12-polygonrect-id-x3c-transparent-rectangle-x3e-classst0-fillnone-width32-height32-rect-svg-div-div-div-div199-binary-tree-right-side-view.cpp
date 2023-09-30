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
    
    void reversePreOrder(TreeNode * root,int level,vector<int>&ans){

    if(root==NULL) return;
    
        //check is ans size same as level then insert else skip
        if(ans.size()==level) ans.push_back(root->val);
        
        //now traverse left and right and make sure increase level
        //we do not check left and right null because if we reach null base case will      handle
        reversePreOrder(root->right,level+1,ans);
        reversePreOrder(root->left,level+1,ans);
        
    
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int level=0;
        reversePreOrder(root,level,ans);
        
        
        return ans;
    }
};