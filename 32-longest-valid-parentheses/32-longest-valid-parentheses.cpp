class Solution {
public:
    int longestValidParentheses(string s) {
        
        // by two stack
        
        stack<char> ct;
        stack<int> index;
        int ans=0;
        index.push(-1);
        
        for(int i=0;i<s.size();i++){
            
            // if open save in stack and add in index
            if(s[i]=='(')
            {
                    ct.push('(');
                    index.push(i);
            }
            
            //close bracket
             
            else
            {
                // check if prev or top stack is open then delete index and top of stack
                if(!ct.empty() &&ct.top()=='('){
                    
                    ct.pop();
                    index.pop();
                    ans=max(ans,i-index.top());
                }
                else{
                    
                    index.push(i);
                    
                }
                
            }
        }
        return ans;
    }
};