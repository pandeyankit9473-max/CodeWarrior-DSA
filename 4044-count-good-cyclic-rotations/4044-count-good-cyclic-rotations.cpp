class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        long long sumHalf=0;
        for(int i=0;i<n/2;i++) sumHalf+=nums[i];
        int ans=0;
        for(int i=0;i<n;i++){
            if(sumHalf>sum-sumHalf) ans++;
            sumHalf-=nums[i];
            sumHalf+=nums[((n/2)+i)%n];
        }
       
       return ans;
        
    }
};