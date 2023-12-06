class Solution {
public:
    int totalMoney(int n) {
        
        int full=ceil(n/7);
        int leftover=full+1;
        int rem=n%7;
        
        int total=0;
        
        if(n<8) return n*(n+1)/2;
        else{
        
        int i=0;
        while(full>0){
        total+=28+(7*i);
            full--;
            i++;
        }
        
        
        while(rem>0){
            total+=leftover;
            leftover++;
            rem--;
        }
        return total;
        }
    }
};