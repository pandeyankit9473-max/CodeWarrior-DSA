class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> dp(1000003, 0);  // dp[v] = longest run ending exactly at v
        int ans = 0;
        for (int x : nums) {
            // Go from x+1 down to x so dp[x-1] and dp[x] are still the old values
            for (int y = x + 1; y >= x; y--) {
                dp[y] = max(dp[y], dp[y - 1] + 1);
                ans = max(ans, dp[y]);
            }
        }
        return ans;
    }
};