//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
        string ans="";
        string temp="";
        
        
        //traverse the string in reverse
        for(int i=S.length()-1;i>=0;i--){
            
            if(S[i]=='.'){
                
                reverse(temp.begin(),temp.end());
                ans=ans+temp+'.';
                temp="";
            }
            else {
                temp.push_back(S[i]);
            }
            
        }
        
        //last word will remain in temp so keep it out
        
        reverse(temp.begin(),temp.end());
        ans+=temp;
        
        
        return ans;
        
        
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends