class Solution {
public:
    int n;
    int memo[50001];
    
    //basic binary search to get next job we are getting lower bound
    int getNextIndex(vector<vector<int>> &arr,int l,int currJobEnd){
       
        int r=n-1;
        
        int result=n+1;
        
        while(l <=r){
            int mid=l+(r-l)/2;
            
            //aisa mila jiska starting time curr ke ending se jyda h(matlab le sakte h)
            if(arr[mid][0] >= currJobEnd){
                result=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return result;
        
    }
    
    int solve(vector<vector<int>>&arr,int i){
        
        n=arr.size();
        //base case
        if (i >= n) return 0;
        
        
        if(memo[i] != -1) 
            return memo[i];
        
            // we need next valid job that can be perform if we took i th (checking by ending)
            int nextJob=getNextIndex(arr,i+1,arr[i][1]);
            
            //take
            int take=arr[i][2]+solve(arr,nextJob);
            //notTake
            int notTake=solve(arr,i+1);
        
        return memo[i]=max(take,notTake);
            
        }
    
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
         memset(memo,-1,sizeof(memo));
        
        int n=startTime.size();
        
        vector<vector<int>> arr(n,vector<int>(3,0)); // start ,end ,profit
        
        for(int i=0;i<n;i++){
            arr[i][0]=startTime[i];
            arr[i][1]=endTime[i];
            arr[i][2]=profit[i];
        }
        
        sort(arr.begin(),arr.end()); //no need of comparator case want sort via 1st (start)
        
            return solve(arr,0);
    }
};