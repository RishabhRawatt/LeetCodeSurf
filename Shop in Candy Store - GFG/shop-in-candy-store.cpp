//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        
        int max=0;
        int min=0;
        sort(candies,candies+N);
        
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=candies[i];
        // }
        
        int buy=0;
        int sell=N-1;
        
        while(buy <=sell){
            
        min+=candies[buy];
        buy++;
        sell=sell-K;
        }   
        
         buy=0;
         sell=N-1;
        
        while(buy <= sell){
            max+=candies[sell];
            sell--;
            buy=buy+K;
        }
        
        return {min,max};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends