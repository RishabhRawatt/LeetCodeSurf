class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        //using array
                
        int n=s.length();
        
        int result=-1;
        
       vector<int>whichIndex(26,-1);
        
        for(int i=0;i<n;i++){
            char ch=s[i];
        
            //check in array is found index?
            if(whichIndex[ch-'a'] == -1)  // means not found 
                whichIndex[ch-'a'] = i;
            else
                //to get middle length subtract curr index - old -1;
                result=max(result,i - whichIndex[ch- 'a'] - 1);
        }
        
     
        return result;
    }
};