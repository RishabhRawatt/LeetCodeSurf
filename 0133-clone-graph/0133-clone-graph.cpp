/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
        unordered_map<Node*,Node*>m;
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        Node* start=new Node(node->val,{});
        m[node]=start;
        queue<Node*>q;
        q.push(node);
        while(q.size()){
            Node* t=q.front();
            q.pop();
            for(auto i:t->neighbors){
                if(m.find(i)==m.end()){
                   m[i]=new Node(i->val,{});
                   q.push(i);
                }
                 m[t]->neighbors.push_back(m[i]);
            }
        }
        return m[node];
     }
};