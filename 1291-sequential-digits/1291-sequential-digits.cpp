class Solution {
public:
    // try bfs in these types problem
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        
        // insert in q like 
        // 1,2,3,4,5,6,7,8
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        
        vector<int>ans;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            
            // check temp range
            if(temp >= low && temp <= high){
            ans.push_back(temp);
            }
            
            //this will increment like 
            // 1 --> 12   , 2 --> 23  , 3 --> 34 ..... 8 ->89
            // 12 --> 123 , 23 --> 234, 34--> 345 ......89 --> (not consider)
            int last_digit=temp%10;
            if(last_digit+1 <= 9){
                q.push(temp*10+(last_digit+1)); //example if temp 12 --> 123
            }
        }
        return ans;
    }
};