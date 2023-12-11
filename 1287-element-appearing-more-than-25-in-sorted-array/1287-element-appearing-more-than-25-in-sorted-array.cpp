class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
     
        int twentyFive=arr.size()/4;
        
        int count=1;
        for(int i=1;i<arr.size();i++){
            
            if(arr[i-1]==arr[i]) count++;
            else count=1;
            
            if(count > twentyFive) return arr[i];
            
        }
        //edge case for only one
        return arr[0];
        
    }
};