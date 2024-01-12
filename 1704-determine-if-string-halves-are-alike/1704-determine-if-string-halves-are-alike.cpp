class Solution {
public:
    bool halvesAreAlike(string s) {
        
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int n=s.size();
        
        int count=0;
        int half=n/2;
        for(int i=0;i<n;i++){
            if(i<half){
                if(vowels.find(s[i])!=vowels.end()){
                        count++;
                }
            }else{
                if(vowels.find(s[i])!=vowels.end()){
                        count--;
                }
            }
        }
        return count==0;
    }
};