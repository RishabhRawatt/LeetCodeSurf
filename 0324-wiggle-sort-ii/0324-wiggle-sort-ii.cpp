class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        vector<int>temp=nums;
        sort(begin(temp),end(temp));
        int n=nums.size();
        
        int j=n-1;
        int i=1;
        while(i<n){
            nums[i]=temp[j];
            j--;
            i+=2;
        }
        i=0;
        while(i<n){
            nums[i]=temp[j];
            j--;
            i+=2;
        }
        
    }
};