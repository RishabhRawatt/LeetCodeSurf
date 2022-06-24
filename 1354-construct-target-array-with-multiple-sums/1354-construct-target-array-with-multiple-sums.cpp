class Solution {
public:
    bool isPossible(vector<int>& target) {
        
        
        //extra case
        if(target.size()==1)
            return target[0]==1;
        
        long sum=0;
        for(int i=0;i<target.size();i++){
            sum+=target[i];
        }
        
        //created a max heep and insert all elements of target
        priority_queue<int> pq(target.begin(),target.end());
        
        
        while(pq.top() != 1){
            
            long largest =pq.top();
            pq.pop();
            long largest2=pq.top();
            
            long restsum=sum-largest;
            
            //now multiplying factor
            
            int n= max(1l,(largest-largest2)/restsum);
            
            //sub from largest n times
            largest -=(restsum * n);
            
            //now push it back after subtracting the sum
            pq.push(largest);
            
            //then our sum also get updated
            sum=restsum +largest;
            
            
            //if sum get below 1 that means going in -ve which is invalid
            if(largest < 1) return false;
        }    
            return true;
        
    }
};