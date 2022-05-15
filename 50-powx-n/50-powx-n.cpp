class Solution {
public:
    double myPow(double x, int n) {
        if(n==-1)
            return 1/x;
        if(n==0)
            return 1;
        
        double tmp = myPow(x, n/2);
        
        if(n%2==0){
			return tmp*tmp;
        }
        
        if(n<0)
            return tmp*tmp*(1/x);
        
        return tmp*tmp*x;
    }
};