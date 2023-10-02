class Solution {
public:
    string reverseVowels(string s) {
        //using map
         unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int l=0,r=s.size()-1;
        
        while(l<r){
            if(vowels.find(tolower(s[l])) == vowels.end()) l++;
            else if(vowels.find(tolower(s[r])) == vowels.end()) r--;
            else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
        
    }
};