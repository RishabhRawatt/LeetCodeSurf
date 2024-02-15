class Solution {
public:
    
    //t.c O(n)+nlog(n)
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        long long totalsum=0;
        
        long long perimeter=0;
        
        for(auto it:nums){
            if(it < totalsum){
                perimeter=totalsum+it;
            }
            totalsum+=it;
        }
        
        return perimeter==0 ? -1 :perimeter ;
    }
};