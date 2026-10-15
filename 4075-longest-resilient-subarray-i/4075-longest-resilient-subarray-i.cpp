
class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int len=1, ans=1;
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]%k==nums[i-1]%k){
                len++;
                sum+=nums[i];
            }
            else{
                len=1;
                sum=nums[i];
            }
            if(sum%k==nums[i]%k) ans=max(ans,len);
        }
        return ans;
    }
};
