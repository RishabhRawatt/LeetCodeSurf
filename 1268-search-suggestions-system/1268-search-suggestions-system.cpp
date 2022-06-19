class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        //to short so all strings will in order
        sort(products.begin(), products.end());
        
        //two pointer for checking
        int l=0;
        int r=products.size()-1;
        
        vector<vector<string>> ans;
        
        for(int i=0;i<searchWord.size();i++){
            
            vector<string> temp;
            
            //check first one 
            while(l<=r && products[l][i] != searchWord[i])
                l++;
            
            //check from last
            while(l<=r && products[r][i] != searchWord[i])
                r--;
            
            // if it matches then just add only top three string values
            for(int j=l;j<l+min(3,r-l+1);j++){
                
                temp.push_back(products[j]);
            }
            
            ans.push_back(temp);
            
        }
        return ans;
    }
};