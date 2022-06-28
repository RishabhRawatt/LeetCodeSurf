class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        
        int n=numbers.size();
        
        // edge cases
        if(n==0 || n==1){
            return ans;
        }
        
        int l=0;
        int r=n-1;
        //clone vector for indexes
         vector<int> clone(numbers);
        
        //no need to sort cause already shorted
       // sort(numbers.begin(),numbers.end());
        
        while(r>l){
            
            if(numbers[r]+numbers[l]==target){
                break;
            }
            else if( numbers[r]+numbers[l] > target){
                r--;
            }
            else 
                l++;
        }
        
        for(int i=0;i<n;i++){
            if(numbers[l]==clone[i]){
                ans.push_back(i+1);
            }
            else if(numbers[r] == clone[i]){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};