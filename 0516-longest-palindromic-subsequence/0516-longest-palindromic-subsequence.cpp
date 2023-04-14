class Solution {
public:
    int longestPalindromeSubseq(string s) 
    {
        int n = s.size();
        vector<vector<int>>dp(n, vector<int>(n, 0));
        //for n length string we need LPS for string with length (n - 1) or (n - 2)
        //We need to already have LPS for smaller lengths before moving to greater lengths
        //so we need to go bottom up 
        //Calculating LPS for all strings of length = 1 to length = n
        //================================================================================
        for (int len = 1; len <= n; len++)
        {
            for (int start = 0; start <= (n - len); start++)
            {
                int end = start + len - 1; //[start, end] denotes the string under consideration
                if (len == 1) { dp[start][end] = 1; continue; }
                
                if (s[start] == s[end]) dp[start][end] = 2 + dp[start + 1][end - 1];
                else dp[start][end] = max(dp[start + 1][end], dp[start][end - 1]); 
            }
        }
        //=====================================================================================
        return dp[0][n - 1];
    }
};