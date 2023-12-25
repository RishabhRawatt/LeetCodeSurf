class Solution {
public:
    
    //top down
    
    int t[101];
    
    int solve(int i,string &s,int &n){
        
        if(t[i]!=-1)
            return t[i];
        
        if(i==n) return t[i]=1; //only one valid
        if(s[i]=='0') return t[i]=0; // this will not valid dont consider it
        
        int result = solve(i+1,s,n); // considering one one
        
        if( i+1 < n ){
            //that means if i is one then we dont care for second num (10-19)
            //but i is 2 then we only allow next to that i must be <= 6 (20-26)
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6'))
                //add in solve
                result+=solve(i+2,s,n);
        }
        return t[i]=result;
    }
    
    int numDecodings(string s) {
        int n=s.length();
        
        memset(t,-1,sizeof(t));
        
        return solve(0,s,n);
    }
};