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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        //map
        map<int,map<int,multiset<int>>>nodes;
        //queue
        queue<pair<TreeNode *,pair<int,int>>> todo;
        
    //push root in queue
    todo.push({root,{0,0}});
    
    //traverse
    while(!todo.empty()){
        //take top and then pop
        auto p=todo.front();
        todo.pop();
        
        //split the values
        TreeNode * temp=p.first;
        int x=p.second.first , y=p.second.second;
        
        //push in ds
        nodes[x][y].insert(temp->val);
        
        //check left
        if(temp->left){
        todo.push({temp->left,{x-1,y+1}});
        }
        //check right
        if(temp->right){
        todo.push({temp->right,{x+1,y+1}});
            }
        
    
    }
    
    //now make a vector to return 
    vector<vector<int>>result;
    
    for(auto p:nodes){
        
        vector<int>column;
        for(auto q:p.second){
            column.insert(column.end(),q.second.begin(),q.second.end());
            }
        result.push_back(column);
        }
    
    return result;
        
        
    }
};