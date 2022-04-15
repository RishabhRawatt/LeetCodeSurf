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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        //base case 
        
        if(root==NULL){
            return NULL;    
        }
        
        if(root->val >=low && root->val <=high){
            
            root->left=trimBST(root->left,low,high);
            root->right=trimBST(root->right,low,high);
            return root;
        }
        
        //if root is bigger than high then traverse left(smaller range)
        else if(root->val > high){
            return trimBST(root->left,low,high);
        }
        
        //if root val is less than low then traverse in right(bigger range)
        else if(root->val < low){
            
            return trimBST(root->right,low,high);
        }
        return root;
    }
};