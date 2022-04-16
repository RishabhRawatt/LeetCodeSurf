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
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        
        //traverse from right 
        if(root !=NULL){
            
            //reach to last right node
            convertBST(root->right);
            // change sum to sum+node(value)
            sum +=root->val;
            //then replace the sum with node value 
            root->val =sum;
            //then after traverser from right now go left
            convertBST(root->left);
        }
        return root;
    }
};