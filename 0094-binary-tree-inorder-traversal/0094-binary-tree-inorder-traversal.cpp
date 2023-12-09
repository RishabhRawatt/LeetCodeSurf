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
    // by morris traverse S.C  O(1)
    
       vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> inorder;
        TreeNode * curr=root;
        
        while(curr !=NULL){
            //case 1
            if(curr->left == NULL){
                inorder.push_back(curr->val);
                curr=curr->right;
            }
            //case 2
            else{
                TreeNode * prev=curr->left;
                while(prev->right && prev->right != curr){
                    prev=prev->right;
                }
                //add thread
                if(prev->right==NULL){
                    prev->right=curr;
                    curr=curr->left;
                }
                //remove thread
                else{
                    prev->right=NULL;
                    inorder.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return inorder;
    }
};