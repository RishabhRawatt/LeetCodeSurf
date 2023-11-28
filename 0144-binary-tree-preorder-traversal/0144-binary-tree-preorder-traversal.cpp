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
    // by morris traverse
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preOrder;
        TreeNode * curr=root;
        
        while(curr !=NULL){
            //case 1
            if(curr->left == NULL){
                preOrder.push_back(curr->val);
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
                    preOrder.push_back(curr->val);
                    curr=curr->left;
                }
                //remove thread
                else{
                    prev->right=NULL;
                    curr=curr->right;
                }
            }
        }
        return preOrder;
    }
};
        
