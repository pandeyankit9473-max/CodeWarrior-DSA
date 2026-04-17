class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int low=1 , high=num/2;
        while(low<=high){
            int mid=(low+high)/2;
            long long pdct=(long long)mid*mid;
            if(pdct==num) return true;
            else if(pdct>num) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};