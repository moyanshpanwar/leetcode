class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (n<0){
            x = 1/x;
            N = -N;
        }
        return solve(x,N);
    }
    double solve(double x, long long n){
        if (n == 0){
            return x=1;
        }
        else if(n == 1){
            return x;
        }
        double pow = myPow(x, n/2);
        if (n%2 == 0){
            return pow*pow;
        } 
        else{
            return pow*pow*x;
        }
    }
};