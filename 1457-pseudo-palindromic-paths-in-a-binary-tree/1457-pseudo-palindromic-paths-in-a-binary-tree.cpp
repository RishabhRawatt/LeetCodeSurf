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
    int result=0;
    
    void solve(TreeNode * root ,vector<int>&freq){
        
        //base case
        if(root==NULL) return;
        
        freq[root->val]++;
        
        //if that is leaf node
        if(root->left == NULL && root->right ==NULL){
            
            // we check for pseudo-palindromic
            // we only allow 1 odd frequency only
            int oddfreq=0;
            for(int i=0;i<=9;i++){
                if(freq[i] % 2 != 0)
                    oddfreq++;
            }
            
            // if odd freq elements are less than 1 thats a valid
            if(oddfreq <= 1) result++;
        }
        
        // go left & right
        solve(root->left,freq);
        solve(root->right,freq);
        
        //undo changes
        freq[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        
        solve(root ,freq);
        return result;
    }
};