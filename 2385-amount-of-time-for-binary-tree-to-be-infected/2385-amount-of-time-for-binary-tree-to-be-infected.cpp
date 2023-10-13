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
    
    TreeNode * markParent(TreeNode* root,unordered_map<TreeNode * , TreeNode *>&parent_map,int start){
        
        //bfs
        queue<TreeNode*>q;
        q.push(root);
        
        //to store startpointer 
        TreeNode * startNode;
        
        while(!q.empty()){

        TreeNode * temp=q.front();
        //check if temp value is start then we found start pointer
        if(temp->val==start) startNode =temp;
        q.pop();
            
        if(temp->left){
            parent_map[temp->left]=temp;
            q.push(temp->left);
        }
            
        if(temp->right){
            parent_map[temp->right]=temp;
            q.push(temp->right);
        }
    }
        return startNode;
    }
       
    
    int amountOfTime(TreeNode* root, int start) {
       
        //make parent pointer
        unordered_map<TreeNode * , TreeNode*>parent_map;
        TreeNode * startNode=markParent(root,parent_map,start);  
        
        
        //now traverse by bfs
        
        //visited map
        unordered_map<TreeNode * ,bool >visited;
        queue<TreeNode * >q;
        
        
        q.push(startNode);
        visited[startNode]=true;
        
        //to store time
         int currTime=0;
        
        while(!q.empty()){
            
            //this is to check when we traverse we burned atleast 1 node 
            // int burn=0;
            
            
            int size=q.size();
            
            //we need to traverse all nodes at that level then increment time
            for(int i=0;i<size;i++){
                
            TreeNode * currNode=q.front();
            q.pop();
                
            //go left , right , up make sure check in visited to 
                
            if(currNode->left && !visited[currNode->left]){
                // burn=1;
                q.push(currNode->left);
                visited[currNode->left]=true;
                
            }
                
            if(currNode->right && !visited[currNode->right]){
                // burn=1;
                q.push(currNode->right);
                visited[currNode->right]=true;
                
            } 
                
            if(parent_map[currNode] && !visited[parent_map[currNode]]){
                // burn=1;
                q.push(parent_map[currNode]);
                visited[parent_map[currNode]]=true;
                
            }
            
            }
            
            // if(burn)currTime++; 
            currTime++;
        }
    
        return currTime-1;
        
    }
};