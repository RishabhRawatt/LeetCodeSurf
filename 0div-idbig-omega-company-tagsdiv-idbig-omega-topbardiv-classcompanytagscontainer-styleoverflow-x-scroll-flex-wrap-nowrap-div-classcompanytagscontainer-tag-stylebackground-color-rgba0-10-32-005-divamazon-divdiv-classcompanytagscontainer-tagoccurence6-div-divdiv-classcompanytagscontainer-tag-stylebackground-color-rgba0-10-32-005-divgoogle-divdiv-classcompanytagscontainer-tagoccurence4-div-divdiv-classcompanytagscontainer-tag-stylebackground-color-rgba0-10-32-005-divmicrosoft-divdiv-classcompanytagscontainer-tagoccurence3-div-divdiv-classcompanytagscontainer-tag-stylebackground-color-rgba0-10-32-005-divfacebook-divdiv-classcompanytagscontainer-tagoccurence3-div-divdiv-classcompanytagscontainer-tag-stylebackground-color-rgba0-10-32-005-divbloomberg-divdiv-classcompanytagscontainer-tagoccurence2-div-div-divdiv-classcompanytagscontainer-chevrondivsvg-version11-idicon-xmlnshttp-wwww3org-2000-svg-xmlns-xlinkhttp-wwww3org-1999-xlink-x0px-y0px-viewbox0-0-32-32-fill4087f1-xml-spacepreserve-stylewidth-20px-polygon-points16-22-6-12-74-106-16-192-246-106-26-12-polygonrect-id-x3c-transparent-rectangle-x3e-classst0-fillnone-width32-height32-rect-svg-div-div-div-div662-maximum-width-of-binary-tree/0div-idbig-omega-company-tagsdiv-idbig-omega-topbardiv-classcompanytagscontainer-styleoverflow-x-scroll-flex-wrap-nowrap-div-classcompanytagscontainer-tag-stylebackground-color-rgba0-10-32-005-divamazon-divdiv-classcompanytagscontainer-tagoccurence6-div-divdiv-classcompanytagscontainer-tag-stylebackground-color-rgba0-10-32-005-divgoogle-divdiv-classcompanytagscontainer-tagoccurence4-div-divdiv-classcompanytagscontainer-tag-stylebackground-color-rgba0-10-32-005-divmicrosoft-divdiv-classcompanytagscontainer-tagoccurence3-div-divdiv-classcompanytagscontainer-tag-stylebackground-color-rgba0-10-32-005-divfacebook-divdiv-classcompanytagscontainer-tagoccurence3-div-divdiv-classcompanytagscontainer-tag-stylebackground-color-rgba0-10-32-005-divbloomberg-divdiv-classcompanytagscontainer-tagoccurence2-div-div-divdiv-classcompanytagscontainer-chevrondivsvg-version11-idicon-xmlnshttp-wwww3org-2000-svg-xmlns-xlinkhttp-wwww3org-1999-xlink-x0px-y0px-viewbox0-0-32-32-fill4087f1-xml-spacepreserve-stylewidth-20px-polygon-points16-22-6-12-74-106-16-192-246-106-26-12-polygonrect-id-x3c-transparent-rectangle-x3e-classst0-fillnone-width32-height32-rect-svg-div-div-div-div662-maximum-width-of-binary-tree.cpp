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
    int widthOfBinaryTree(TreeNode* root) {
        
        int ans=0;
        
        //edge case
        if(root==NULL)return 0;
        
        //make queue and width variable
        queue<pair<TreeNode* ,int>>q;
        int width=0;
        
        //i am using 0 base indexing so 2*i+1 and 2*i+2
        
        //add root in queue
        q.push({root,0});
        
        //loop till q empty
        while(!q.empty()){
            
            int size=q.size();
            //now take minimum of that level front because left always min 
            int mmin=q.front().second;
            //variable to store first and last to get max width;
            int first,last;
            
            //loop as it in level order
            for(int i=0;i<size;i++){
                //now to solve overflow values fix id
                long currId=q.front().second-mmin;
                //take node from queue and then pop
                TreeNode * temp=q.front().first;
                q.pop();
                
                //make sure add values if it is first or last node of that level
                if(i==0) first=currId;
                if(i==size-1) last=currId;
                
                //traverse left and right if not null and pass index as in formula
                if(temp->left) q.push({temp->left,currId*2+1});
                if(temp->right) q.push({temp->right,currId*2+2});
                
            }
            //calculate that level width 
            ans=max(ans,last-first+1);
        }       
        return ans;
        
    }
};