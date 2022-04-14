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
        void dfs (TreeNode* root, int val,TreeNode *&ans) {
            
            //base case
            
            if(!root)
                return;
            
            
            if(root->val==val){
                ans = root;
            }
            // if value is smaller then find in left sub tree
            else if(root->val >val)
               dfs(root->left,val,ans);
            
            // if value is bigger then find in right sub tree
            else if(root->val < val)
                dfs(root->right,val,ans);
            
        }

    
    TreeNode* searchBST(TreeNode* root, int val) {
        
       TreeNode * ans=NULL;
        
        dfs(root,val,ans);
        return ans;
            
        
        }
    
};