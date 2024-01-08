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
    
    void solve(TreeNode * root,int low,int high,int &sum){
        //base case
        if(root==NULL) return;
        
        //insert if valid
         if (root->val >= low && root->val <= high) {
            sum += root->val;
        }
        
        //if root value lies in side high bound keep traversing
       if(root->val < high){
           solve(root->right,low,high,sum);
       }
        //same for low bound
        if(root->val > low){
            solve(root->left,low,high,sum);
        }
        
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum=0;
        solve(root,low,high,sum);
        
        return sum;
        
    }
};