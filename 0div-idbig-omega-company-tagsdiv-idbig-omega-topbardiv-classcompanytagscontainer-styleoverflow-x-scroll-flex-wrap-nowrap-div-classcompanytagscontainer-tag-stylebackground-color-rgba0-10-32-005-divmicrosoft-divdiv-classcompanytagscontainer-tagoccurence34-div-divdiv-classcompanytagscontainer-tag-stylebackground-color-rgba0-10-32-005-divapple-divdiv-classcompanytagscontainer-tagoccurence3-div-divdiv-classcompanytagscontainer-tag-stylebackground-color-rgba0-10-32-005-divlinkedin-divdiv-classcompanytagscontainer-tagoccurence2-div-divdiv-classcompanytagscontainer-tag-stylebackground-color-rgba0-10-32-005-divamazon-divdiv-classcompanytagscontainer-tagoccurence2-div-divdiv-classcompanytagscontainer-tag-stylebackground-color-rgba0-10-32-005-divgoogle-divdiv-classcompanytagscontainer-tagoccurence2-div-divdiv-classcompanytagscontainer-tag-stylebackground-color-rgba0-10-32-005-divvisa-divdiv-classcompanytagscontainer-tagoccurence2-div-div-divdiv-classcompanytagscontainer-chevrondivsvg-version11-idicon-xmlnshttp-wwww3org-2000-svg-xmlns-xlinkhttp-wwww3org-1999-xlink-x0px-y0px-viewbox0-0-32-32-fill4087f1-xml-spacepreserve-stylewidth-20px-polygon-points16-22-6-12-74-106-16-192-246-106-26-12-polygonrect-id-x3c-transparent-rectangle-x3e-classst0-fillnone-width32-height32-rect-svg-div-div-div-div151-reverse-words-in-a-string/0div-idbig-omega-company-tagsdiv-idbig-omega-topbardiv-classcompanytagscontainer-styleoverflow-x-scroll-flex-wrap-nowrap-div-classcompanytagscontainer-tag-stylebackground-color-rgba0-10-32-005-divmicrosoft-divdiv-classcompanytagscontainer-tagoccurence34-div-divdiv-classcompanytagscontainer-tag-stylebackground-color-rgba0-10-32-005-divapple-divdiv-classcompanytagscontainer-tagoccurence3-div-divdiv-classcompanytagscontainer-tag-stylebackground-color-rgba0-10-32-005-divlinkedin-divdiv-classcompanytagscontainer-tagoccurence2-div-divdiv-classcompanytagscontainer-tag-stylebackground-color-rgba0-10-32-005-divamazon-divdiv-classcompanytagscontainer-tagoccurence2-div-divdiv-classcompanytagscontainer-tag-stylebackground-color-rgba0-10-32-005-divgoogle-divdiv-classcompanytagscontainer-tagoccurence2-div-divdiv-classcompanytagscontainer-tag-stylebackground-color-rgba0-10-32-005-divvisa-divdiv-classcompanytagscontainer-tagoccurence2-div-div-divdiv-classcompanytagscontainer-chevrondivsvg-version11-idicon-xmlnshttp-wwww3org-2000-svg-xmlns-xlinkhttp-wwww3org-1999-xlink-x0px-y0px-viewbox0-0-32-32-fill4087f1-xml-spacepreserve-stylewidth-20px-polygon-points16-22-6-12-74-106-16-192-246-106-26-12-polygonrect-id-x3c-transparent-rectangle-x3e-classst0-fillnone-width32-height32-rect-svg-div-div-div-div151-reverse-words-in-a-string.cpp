class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;
        int n=s.size();

        while(i<n){
            //to skip leading spaces
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            //j for get the end of word
            int j=i+1;
            while(j<n && s[j]!=' ') j++;
            
            //to get word 
            string temp=s.substr(i,j-i);
            
            //if at starting ans is empty just add temp
            if(ans.size()==0) ans=temp;
            //if not then add temp before ans and add space
            else ans=temp+" "+ans;
            //now i will pe at place in front of another word  firt char
            i=j+1;

            }
            return ans;

        }
    
};