class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        //using stack
        int n=temperatures.size();
        vector<int>ans(n);
        
        stack<int>st;
        
        // we insert index (we just compare values and insert index)
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(st.empty()) ans[i]=0;
            
            //prev index - curr index
            else ans[i]=st.top()-i;
            
            //insert curr index
            st.push(i);
        }
        
        return ans;
    }
};