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
    
    //find left and right height 
    int findLeftH(TreeNode *root){
        
        int h=0;
        while(root){
            h++;
            root=root->left;
        }
        return h;
    }
    
    int findRightH(TreeNode *root){
        int  h=0;
        while(root){
            h++;
            root=root->right;
        }
        return h;
        }
    
    
    int countNodes(TreeNode* root) {
        
        //base case
        if(!root)return 0;
        
        int lh=findLeftH(root);
        int rh=findRightH(root);
        
        //check
        if(lh==rh) return (1<<lh)-1; //this left shift same as 2 pow lh
        
        //if not true do
        return 1+ countNodes(root->left)+countNodes(root->right);
    }
};