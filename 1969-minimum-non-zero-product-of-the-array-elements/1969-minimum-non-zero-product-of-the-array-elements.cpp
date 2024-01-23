class Solution {
public:
    // formula will be 
    //ans =max * ((max-1)/2)pow (max-1)/2
    
        // means if p=3 then 
        // 15 -- 1 time--> 2pow3-1
        // 14 -- 15/2--7 times
        // thats the ans
    
        // this pow to find quickly
    long long myPow(long long base, long long exponent, long long mod) {
        if (exponent == 0) return 1;
        if (exponent == 1) return base % mod;
        
        long long tmp = myPow(base, exponent/2, mod);
        
        if (exponent % 2 == 0) { // (base ^ exponent/2) * (base ^ exponent/2)
            return (tmp * tmp) % mod;
        }
        else { // (base ^ exponent/2) * (base ^ exponent/2) * base
            tmp = tmp * tmp % mod;
            base %= mod;
            return (tmp * base) % mod;
        }
    }
    
    int minNonZeroProduct(int p) {
        long long range =pow(2,p);
        range--;
        
        //formula 
         // pow(range - 1, range/2) * range
        
        long long mod = pow(10, 9) + 7;
        
        long long ans=myPow(range-1,range/2,mod);
        
        return (ans*(range%mod))%mod;
    }
};