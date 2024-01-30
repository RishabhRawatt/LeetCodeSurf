class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>st;
        
        for(int i=0;i<tokens.size();i++){
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*") {
                st.push(stoi(tokens[i]));
            }
            else{
                int op2=st.top();
                st.pop();
                int op1=st.top();
                st.pop();
                
                if(tokens[i]=="+")
                    op1=op1+op2;
                if(tokens[i]=="-")
                    op1=op1-op2;
                if(tokens[i]=="*")
                    op1=op1*op2;
                if(tokens[i]=="/")
                    op1=op1/op2;
                
                st.push(op1);
            }
        }
        return st.top();
    }
};