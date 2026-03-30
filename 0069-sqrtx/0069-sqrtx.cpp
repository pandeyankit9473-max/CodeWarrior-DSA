class Solution {
public:
    int mySqrt(int x) {
        int low=0 , high=x ,ans=0;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(mid * mid ==x) return mid;
            else if(mid*mid<x){
                ans=mid;
                low=mid+1; // check at right side 
            }
            else // here cndn is mid*mid>x means sqrt will be on left side ..
            high=mid-1;
        }
        return ans;
    }
};