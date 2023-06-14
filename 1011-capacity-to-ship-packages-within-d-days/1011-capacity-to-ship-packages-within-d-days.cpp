class Solution {
public:
    
    bool isPossible(vector<int>&weights, int packages, int days){
        int cnt=0;
        int sumAllocated=0;
        
        for(int i=0;i<weights.size();i++){
            
            if(sumAllocated+weights[i] > packages){
                cnt++;
                sumAllocated=weights[i];
                if(sumAllocated>packages) return false;
            }
            else{
                sumAllocated+=weights[i];
            }
        }
        if(cnt < days) return true;
        return false;
        
    
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        if(days > weights.size()) 
            return -1;
        
        // two pointers for bs
        int low=weights[0];
        int high=0;
        
        for(int i=0;i<weights.size();i++){
            
            high=high+weights[i];
            low=min(low,weights[i]);
        }
        
        //binary search
        //we will stop when low cross high
        while(low<=high)
        {
            int mid=(low+high) >>1;
            
            if(isPossible(weights,mid,days)){
                
                high=mid-1;
            }
            else{
                low=mid+1;     
            }
        }
        return low;

    }
};