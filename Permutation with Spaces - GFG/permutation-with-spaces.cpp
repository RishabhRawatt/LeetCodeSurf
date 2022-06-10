// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    
    vector<string> ans;
    
    void solver(string input, string output)
    {
        
        if(input.length()==0){
            ans.push_back(output);
            return;
        }
        
        //two temp output for each case
        string out1=output;
        string out2=output;
        out1.push_back(' ');
        out1.push_back(input[0]);
        out2.push_back(input[0]);
        
        input.erase(input.begin()+0);
        
        solver(input,out1);
        solver(input,out2);
        return;
        
    }
    
    vector<string> permutation(string S){
        
    string input=S;
    string output="";
    output.push_back(S[0]);
    input.erase(input.begin()+0);
    
    solver(input,output);
    
    return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends