class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int right_shifts=0;
        
        while(left != right){
            left=left>>1;
            right=right>>1;
            right_shifts++;
            
        }
        return left<<right_shifts;
    }
};