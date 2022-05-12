class Solution {
public:
    
    
    void helper(vector<char>& s,int i,int j){
        
        //base condition when i> j 
        if(i>j) return;
        
        // swap last and first element till at mid
        swap(s[i],s[j]);
        
        //call recursively 
        i++;
        j--;
        helper(s,i,j);
        
        
    }
    void reverseString(vector<char>& s) {
        
        helper(s,0,s.size()-1);
    }
};