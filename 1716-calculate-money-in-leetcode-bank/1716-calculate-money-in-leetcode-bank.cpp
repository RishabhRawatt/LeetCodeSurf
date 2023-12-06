class Solution {
public:
    int totalMoney(int n) {
        int terms=n/7;
        int first =28;
        int last =first+(terms-1)*7;
        int total= terms*(first+last)/2;
        
        if(n%7){
            int extra=terms+1;
            for(int i=0;i<(n%7);i++){
                total+=extra;
                extra++;
            }
        }
        
        return total;
    }
};