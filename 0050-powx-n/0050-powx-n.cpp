
class Solution {
public:

    double poWsolve(double a, long long b){

        if(b == 0)
            return 1;

        if(b < 0)
            return 1 / poWsolve(a, -b);

        double half = poWsolve(a, b/2);

        double result = half * half;

        if(b % 2 == 1)
            result = result * a;

        return result;
    }

    double myPow(double x, int n) {
        return poWsolve(x, (long long)n);
    }

};
// double solve(double x ,long n){
//         if(n==0) return 1;
//         if(n<0)  return solve(1/x ,-n);
//         if(n%2==0)return  solve(x*x ,n/2);
//        return x* solve(x*x ,(n-1)/2);
//     }
//     double myPow(double x, int n) {
//         return solve(x ,(long)n);
//     }