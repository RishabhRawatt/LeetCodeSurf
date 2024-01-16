class Solution {
public:
    //using math
    int longestString(int x, int y, int z) {
        //if x and y same so means we can put then all and at last add z
        // (aa bb aa bb aa bb) ab ab ab ..
        if(x==y) return x*4+z*2;
        // not same then we will add minimum of x & y 
        // +2 because we can add any one of x,y at end or start to make still valid
        //last add 2*z
        else return min(x,y)*4+2+z*2;
    }
};