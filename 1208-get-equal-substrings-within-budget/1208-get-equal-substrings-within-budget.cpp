class Solution {
public:
    int equalSubstring(string s, string t, int maxc) {
       int sum=0,i=0,j=0,ans=0;
        
        while(j<s.size())
        {
           sum+= abs(s[j]-t[j]);
           if(sum<=maxc)
           {
               j++;
               ans = max(ans,(j-i));
           }
            else if(maxc<sum)
            {
                while(maxc<sum)
                {   
                    sum-=abs(s[i]-t[i]);
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};