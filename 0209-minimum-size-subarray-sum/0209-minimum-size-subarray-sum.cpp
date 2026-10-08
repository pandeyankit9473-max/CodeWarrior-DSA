class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        int maxi=n;
        long long sum=0;
        long long Total=accumulate(nums.begin(),nums.end(),0LL);
        if(Total<target) return 0;
        while(r<n){
            
             sum+=nums[r];
            while(sum==target|| sum>target){
                
                maxi=min(maxi,r-l+1);
                sum-=nums[l];
                l++;
            }
            

            r++;
        }
        return maxi;
    }
};