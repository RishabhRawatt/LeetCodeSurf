class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        //make priority queue that have max on top
        priority_queue<int,vector<int>>q;
        
        //two int to store top two max values
        int x,y;
        
        //push value in prority queue
        for(auto x:stones)
            q.push(x);
        
        //do then sumtract till we get one value or the queue only have 1 value
        while(q.size() != 1){
            
            //biggest number
            y=q.top();
            q.pop();
            //second big number
            x=q.top();
            q.pop();
            
            //subtract and push again
            q.push(y-x);
        
        }
        return q.top();
    }
};