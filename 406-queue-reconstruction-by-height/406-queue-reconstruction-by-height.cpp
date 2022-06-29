class Solution {
public:
    
    
    //sort acc decrease order of height 
    
    static bool compare(vector<int> &a , vector<int> &b){
        
        if(a[0]==b[0])
            return a[1] < b[1];
        
        else
          return a[0] > b[0]; 
        
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    
        //sort according comparator
        sort(people.begin(),people.end(),compare);
        
        vector<vector<int>> ans;
        
        for(int i=0;i<people.size();i++){
            
            int index=people[i][1];
            
            ans.insert(ans.begin()+index,people[i]);
        }
        
        return ans;
        
    }
};