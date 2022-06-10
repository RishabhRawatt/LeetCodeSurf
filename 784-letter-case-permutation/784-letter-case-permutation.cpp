class Solution {
public:
    
    vector<string> ans;
        
        
    void solver(string input,string output){
        
        
        //base case
        if(input.length()==0){
            ans.push_back(output);
            return;
        }
        
        string op1=output;
        string op2=output;
        
        //if it it an integer so dont recurse just skip 
        if(isdigit(input[0])){
            
            //string op1=output;
            output.push_back(input[0]);
            input.erase(input.begin()+0);
            solver(input,output);
        }
        
        
        //two outputs 1 upper 1 lower
        
        else{
        op1.push_back(toupper(input[0]));
        op2.push_back(tolower(input[0]));
        
        input.erase(input.begin()+0);
        
        solver(input,op1);
        solver(input,op2);
       // return;
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        
        string input=s;
        string output="";
        
        // output.push_back(input[0]);
        // input.erase(input.begin()+0);
        
        
        solver(input,output);
        return ans;
    }
};