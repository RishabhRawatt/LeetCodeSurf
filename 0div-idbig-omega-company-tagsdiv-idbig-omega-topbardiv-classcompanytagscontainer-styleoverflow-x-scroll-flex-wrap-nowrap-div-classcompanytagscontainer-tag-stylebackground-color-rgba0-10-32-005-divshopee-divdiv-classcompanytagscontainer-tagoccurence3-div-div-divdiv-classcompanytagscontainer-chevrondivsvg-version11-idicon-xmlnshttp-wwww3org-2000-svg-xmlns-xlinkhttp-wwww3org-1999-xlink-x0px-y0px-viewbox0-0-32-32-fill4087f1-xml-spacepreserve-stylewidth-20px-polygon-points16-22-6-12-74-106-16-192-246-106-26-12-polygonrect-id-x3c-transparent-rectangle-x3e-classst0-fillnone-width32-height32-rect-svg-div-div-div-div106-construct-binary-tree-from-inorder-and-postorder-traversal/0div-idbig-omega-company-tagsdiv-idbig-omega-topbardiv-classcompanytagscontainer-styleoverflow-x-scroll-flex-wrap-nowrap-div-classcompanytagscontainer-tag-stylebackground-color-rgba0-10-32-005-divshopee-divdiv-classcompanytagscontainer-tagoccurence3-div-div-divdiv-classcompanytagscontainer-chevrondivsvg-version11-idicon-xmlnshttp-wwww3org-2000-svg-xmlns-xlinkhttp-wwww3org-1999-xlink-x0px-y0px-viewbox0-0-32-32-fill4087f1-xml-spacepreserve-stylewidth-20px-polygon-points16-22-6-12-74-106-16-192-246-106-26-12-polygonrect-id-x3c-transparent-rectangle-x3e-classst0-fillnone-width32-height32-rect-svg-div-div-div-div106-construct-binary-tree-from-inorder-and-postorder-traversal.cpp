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
        
    TreeNode* constructTree(vector<int>& inorder,int is,int ie, vector<int>& postorder,int ps,int pe,map<int,int>&mp){
        
        //base case
        if(is>ie || ps >pe) return NULL;
        
        //store root node of post end
        TreeNode * root=new TreeNode(postorder[pe]);
        
        //now find node in inorder map
        
        int inRoot=mp[postorder[pe]]; // mp[root->val]
        //store left
        int numLeft=inRoot-is;
        
        //go left
        
        root->left=constructTree(inorder,is,inRoot-1,postorder,ps,ps+numLeft-1,mp);
        
        root->right=constructTree(inorder,inRoot+1,ie,postorder,ps+numLeft,pe-1,mp);
        
        return root;
        
        
        
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        //make map
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        //make function
        TreeNode * root=constructTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        
        return root;
    }
};