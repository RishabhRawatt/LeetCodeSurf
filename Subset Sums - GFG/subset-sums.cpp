//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void helper(int index,int sum,vector<int>arr , int N, vector<int> &ans){
        
        //base case 
        if(index == N){
            ans.push_back(sum);
            return;
        }
        
        //pick
        helper(index+1,sum+arr[index],arr,N,ans);
        
        //not pick
        helper(index+1,sum,arr,N,ans);
        
        
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        
        vector<int> ans;
        
        helper(0,0,arr,N,ans);
        
        sort(ans.begin(),ans.end());
        
        return ans;
        // Write Your Code here
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends