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
    
    vector<vector<int>> ans;
        
    
    void helper(TreeNode *node,int level){
        
        if(ans.size() <= level){
            
            vector<int> temp{node->val};
            ans.push_back(temp);
        }
        else{
            ans[level].push_back(node->val);
        }
        if(node->left)helper(node->left,level+1);
        if(node->right)helper(node->right,level+1);
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root)helper(root,0);
        return ans;
        
    }
};