class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> mose={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            
            
    
        unordered_map<string,int> dict;
        
        //traverse the word array
        for(int i=0;i<words.size();i++){
            
            string str;
            //traverse within each string
            for(int j=0;j<words[i].size();j++){
                
                //we are putting the morse code inplace of char
                str+=mose[words[i][j]-'a'];
            }    
                dict[str]=1;
            
        }
        return dict.size();
        
    }
};