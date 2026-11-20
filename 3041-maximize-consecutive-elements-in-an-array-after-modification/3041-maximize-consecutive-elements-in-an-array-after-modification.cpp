class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        unordered_map<int,int>dp;
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int el:nums){
            dp[el+1]=dp[el]+1;
            dp[el]=dp[el-1]+1;
            ans=max({ans,dp[el+1],dp[el]});
        }
        return ans;
    }
};