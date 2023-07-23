class Solution {
public:
    
    bool isVowel(char c) {
    // Convert the character to lowercase to handle both uppercase and lowercase vowels
    c = tolower(c);

    // Check if the character is 'a', 'e', 'i', 'o', or 'u'
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
    
    
string sortVowels(string s) {
        string temp="";
        
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i])==true){
                temp+=s[i];
                s[i]='#';
            }
        }
    
        sort(temp.begin(),temp.end());
    int x=0;
    
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                s[i]=temp[x];
                x++;
            }
        }
    return s;
    }
};