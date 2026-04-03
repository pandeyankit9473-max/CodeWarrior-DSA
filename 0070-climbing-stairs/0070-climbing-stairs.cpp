class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        int prv2=1 ,prv1=2;
        for(int i=3;i<=n;i++){
            int curr=prv1+prv2;
            prv2=prv1;
            prv1=curr;
        }
        return prv1;
    }
};