class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        
        
        int countvow=0;
        
        for(int i=left;i<=right;i++)
        {
           
            string temp=words[i];
            int end=temp.size();
            
            if(temp[0]=='a' || temp[0]=='e' || temp[0]=='i' || temp[0]=='o' || temp[0]=='u')
            {
            
                if(temp[end-1]=='a' || temp[end-1]=='e' || temp[end-1]=='i' || temp[end-1]=='o' || temp[end-1]=='u'){
                countvow++;
                }
            }
        }
        
        return countvow;
    }
};