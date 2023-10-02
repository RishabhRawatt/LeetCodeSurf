class Solution {
public:
    
    bool isVowel(char x){
        
        if(x=='a' || x=='e' ||x=='e' ||x=='i' ||x=='o' ||x=='u'||x=='A' ||x=='E' ||x=='I' ||x=='O'|| x=='U'){
                
            return true;
        }
        else return false;
    
    }
    
    string reverseVowels(string s) {
        //using two pointers
        
        int l=0;
        int r=s.size()-1;
        
        
        while(l<r){
            
           if(!isVowel(s[l])) l++;
            else if(!isVowel(s[r])) r--;
            else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};