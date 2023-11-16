/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        //edge case
        if(!root) return "";
        
        string s="";
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty()){
            
            //make a node
            TreeNode * Temp=q.front();
            q.pop();
            
            //add value to string if present else #
            if(Temp==NULL) s.append("#,");
            else s.append(to_string(Temp->val)+',');
            
            //now go left go right (do not need to check exist or not cause we need #)
            if(Temp){
            q.push(Temp->left);
            q.push(Temp->right);
            
            }
        }
        return s;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        // check base case
        if(data=="") return NULL;
        
        //using string stream
        stringstream s(data);
        string str; //to store each char
        //getline to get char seperated by comma
        getline(s,str,',');
        
        TreeNode * root=new TreeNode (stoi(str));
        //make queue
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            //make node
            TreeNode * Temp=q.front();
            q.pop();
            //check new char add add to temp
            
            //for left
            getline(s,str,',');
            if(str == "#") Temp->left=NULL;
            else{
                //make new node
                //attached to left side
                //push in queue
                TreeNode * leftNode =new TreeNode(stoi(str));
                Temp->left=leftNode;
                q.push(leftNode);
            }
            
            //same for right
        
            getline(s,str,',');
            if(str == "#") Temp->right=NULL;
            else{
                //make new node
                //attached to right side
                //push in queue
                TreeNode * rightNode =new TreeNode(stoi(str));
                Temp->right=rightNode;
                q.push(rightNode);
            }
        }
        return root;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));