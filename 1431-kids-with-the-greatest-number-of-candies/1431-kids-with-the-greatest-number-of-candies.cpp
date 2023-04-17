class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<int>temp=candies;
    
        vector<bool>ans;
        
        sort(temp.begin(),temp.end());
        
        
        for(int i=0;i<candies.size();i++){
            
            if(candies[i]+extraCandies >= temp[temp.size()-1]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
                }
        }
        
        return ans;
        
    }
};