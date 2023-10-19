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
    
    TreeNode * constructTree(vector<int>&preorder,int preStart, int preEnd,vector<int>&inorder , int inStart,int inEnd,map<int,int>&mp){
        
        //base case
        if(preStart > preEnd || inStart > inEnd) return NULL;
        
        //create Node
        TreeNode* root= new TreeNode(preorder[preStart]);
        
        //find index of current root in inorder
        int inRoot=mp[root->val];
        // get left indexes to pass 
        int numsLeft=inRoot-inStart;
        
        //pass
        root->left=constructTree(preorder,preStart+1,preStart+numsLeft,inorder, inStart,inRoot-1,mp);
        
        root->right=constructTree(preorder,preStart+numsLeft+1,preEnd,inorder,inRoot+1,inEnd,mp);
        
        return root;

    
    
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        //map inorder
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        TreeNode * root=constructTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        
        return root;
        
    }
};