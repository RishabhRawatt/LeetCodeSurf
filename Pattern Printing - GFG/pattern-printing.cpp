//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printPattern(int N)
    {  for(int j=1;j<=N;j++){
        for(int i=1;i<=j;i++){
            cout<<"*";
        }
        cout<<" ";
    }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printPattern(N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends