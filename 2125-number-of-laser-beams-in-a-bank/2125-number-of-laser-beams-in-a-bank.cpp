class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        
        for(int i=0;i<bank[0].size();i++){
            if(bank[0][i]=='1') prev++;
        }
        
        int totalLazer=0;
        
        for(int i=1;i<bank.size();i++){
            int currLazer=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                    currLazer++;
            }
            if(currLazer!=0){
                totalLazer+=currLazer*prev;
                cout<<totalLazer<<" ---";
                prev=currLazer;
                }
        }
        return totalLazer;
    }
};