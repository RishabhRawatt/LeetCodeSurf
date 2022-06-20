class Solution {
public:
    
    vector<string> ans;
    
    void helper(int open , int close , string &output){
        
        //base condition
        if(open == 0 and close ==0 ){
            ans.push_back(output);
            return;
        }
        
        //always choice till open gets 0
        if(open !=0){
             string op1=output;
            op1.push_back('(');
            helper(open-1,close,op1);    
            
        }
        
        //when open become smaller than close then we can add ')' then
        if(close > open ){
            
           
            string op2=output;
            op2.push_back(')');
            helper(open,close-1,op2);
        }
    
    }
    
    vector<string> generateParenthesis(int n) {
        
        int open=n;
        int close=n;
        string output="";
        
        helper(open,close,output);
        
        return ans;
    }
};