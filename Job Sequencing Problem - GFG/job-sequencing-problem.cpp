//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    
    static bool cmp(Job a, Job b){
        return a.profit > b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmp);
        // your code here
        
        int deadline=INT_MIN;
        
        for(int i=0;i<n;i++){
            deadline=max(deadline,arr[i].dead);
        }
        
        //1 based index due to jobid start form 1 and all value -1
        vector<int>schedule(deadline+1,-1);
        
        int count=0;
        int maxprofit=0;
        for(int i=0;i<n;i++){
            int id=arr[i].id;
            int profit=arr[i].profit;
            int deadline=arr[i].dead;
            
            
            for(int k=deadline;k>0;k--){
                if(schedule[k]== -1){
                    count++;
                    maxprofit+=profit;
                    schedule[k]=id;
                    break;
                }
                    
            }
            
        }
        return {count,maxprofit};
    
        
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends