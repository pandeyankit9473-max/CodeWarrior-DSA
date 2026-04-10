class Solution {
public:
    const int M=1e9+7;
    int findPower(long long a , long long b){
        if(b==0) return 1;
        long long half= findPower(a ,b/2);
        long long result=(half*half)%M;
        if(b%2==1) 
        result=(result*a)%M;
        return result;
    }
    int countGoodNumbers(long long n) {
      return (long long)findPower(5 ,(n+1)/2) * findPower(4 ,n/2)%M;  
    }
};
// actually at even position there wll be 5 combination (0,2,4,6,8)
// and at even the primr no combination will be (2,3,5,7)