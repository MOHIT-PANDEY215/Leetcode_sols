class Solution {
public:
    double myPow(double x, int N) {
        long long n= (long long)N;
        if(!n) return 1;
        if(n<0){
            n*=-1;
            x=1.0/x;
        }
        double res=1;
        while(n){
            if(n&1){
            res*=x;
            n--;
        }
        
            x*=x;
            n/=2;
        
        }
        return res;
    }
};