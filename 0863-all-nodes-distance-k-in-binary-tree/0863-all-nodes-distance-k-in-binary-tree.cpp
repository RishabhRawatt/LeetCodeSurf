/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
   void markParent(TreeNode*root,unordered_map<TreeNode * ,TreeNode*> &parent_map){
        
        //bfs
        queue<TreeNode *>q;
        q.push(root);
            
        while(!q.empty()){
            
            TreeNode * temp=q.front();
            q.pop();
            
            if(temp->left){
                //point temp->left to parent
                parent_map[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right){
                parent_map[temp->right]=temp;
                q.push(temp->right);
            }        
        }
    }
        
        
        
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        //map parent nodes pointers
        unordered_map<TreeNode * ,TreeNode*>parent_map;
        markParent(root,parent_map);
        
        //for bfs
        queue<TreeNode *>q;
        //for visited
        unordered_map<TreeNode* ,bool>visited;
        
        q.push(target);
        visited[target]=true;
        
        //to store the current distance of node from target
        int currDist=0;
        
        while(!q.empty()){
            int size=q.size();
            
            if(currDist==k)break;
            
            for(int i=0;i<size;i++){
                //store curr node
                TreeNode * currNode =q.front();
                q.pop();
                
                //check if not visited and left exist then go
                if(currNode->left && !visited[currNode->left]){
                    q.push(currNode->left);
                    visited[currNode->left]=true;
                }
                
                //same for right
                if(currNode->right && !visited[currNode->right]){
                    q.push(currNode->right);
                    visited[currNode->right]=true;
                }
                
                //same for parent
                if(parent_map[currNode] && !visited[parent_map[currNode]]){
                q.push(parent_map[currNode]);
                    visited[parent_map[currNode]]=true;
                }
            }
            //increment curr distance
            currDist++;
           
        }
        
        vector<int>ans;
        while(!q.empty()){
            TreeNode *temp=q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
        
    }
};