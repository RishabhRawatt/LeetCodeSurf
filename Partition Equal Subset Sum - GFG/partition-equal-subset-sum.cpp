// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[1001][1001];
    
    int subsetsum(int sum,int N,int arr[]){
    
        if(N == -1){
            if(sum == 0)
                return 1;
            return 0;
        }
        
        if(sum < 0){
            return 0;
        }
        if(sum == 0)
            return 1;
        if(t[N][sum] != -1) return t[N][sum];
        
        return t[N][sum]= subsetsum(sum-arr[N],N-1,arr) || subsetsum(sum,N-1,arr);
         
        
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum=sum+arr[i];
        }
        
        t[N][sum];
        memset(t,-1,sizeof(t));
        if(sum % 2 != 0)
            return false;
            
         else if(sum %2 ==0) {
            return subsetsum(sum/2,N-1,arr);
         }
    //return 0;
            
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends