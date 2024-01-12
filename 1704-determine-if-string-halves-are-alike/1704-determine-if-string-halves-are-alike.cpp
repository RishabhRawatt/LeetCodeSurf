class Solution {
public:
    bool halvesAreAlike(string s) {
        
        char arr[10]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int n=s.size();
        
        int first=0;
        int second=0;
        int half=n/2;
        for(int i=0;i<n;i++){
            if(i<half){
                for(int j=0;j<10;j++){
                    if(arr[j]==s[i])
                        first++;
                }
            }else{
                for(int j=0;j<10;j++){
                    if(arr[j]==s[i])
                        second++;
                }
            }
        }
        return first==second;
    }
};