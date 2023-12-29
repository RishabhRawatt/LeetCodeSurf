class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        
        int n=jobDifficulty.size();
        
        if(n<d) return -1;
        
        vector<vector<int>>  t(n,vector<int>(d+1,-1));
        
        // t[i][j]= minimum diff of doing job from i to n-1 in j days
        
        //Base Case if D == 1
        
        for(int i=0;i<n;i++){
            t[i][1] = *max_element(jobDifficulty.begin()+i, jobDifficulty.end());
        }
        // for rest days d < 1
        for(int days=2 ;days <= d ;days++){
            for(int i=0; i <= n-days;i++){
                
                int maxD = INT_MIN;
                int result = INT_MAX;
                
                for(int j=i ; j <= n-days ;j++){
                    maxD=max(maxD, jobDifficulty[j]);
                    result =min(result, maxD + t[j+1][days-1]);
                }
                t[i][days]=result;
            }
        }
        return t[0][d];
        
        
    }
};