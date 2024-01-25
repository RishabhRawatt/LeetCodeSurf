class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size(), n = text2.size(), i, j, sol[m+1][n+1];
        for(i=0; i<=m; i++)
            for(j=0; j<=n; j++)
                if(i==0 || j==0)
                    sol[i][j] = 0;
                else if(text1[i-1] == text2[j-1])
                    sol[i][j] = sol[i-1][j-1] + 1;
                else
                    sol[i][j] = max(sol[i-1][j], sol[i][j-1]);
        return sol[m][n];
    }
};