class Solution {
public:
    string largestOddNumber(string num) {
        
       
        string ans;
        for(int i=num.length()-1;i>=0;i--){   
            int toint=num[i]-'0';
           if (toint % 2 != 0){
                ans=num.substr(0,i+1);
                break;
           }
        }
        return ans;
    }
};