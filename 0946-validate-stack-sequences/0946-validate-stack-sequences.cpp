class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>st;
        int n=pushed.size();
        int j=0;
        
        for(int i=0;i<n;i++){
            st.push(pushed[i]);
            while(st.size()>0 && popped[j]==st.top()){
                st.pop();
                j++;
            }
        }
       return st.size() == 0;
    }
};