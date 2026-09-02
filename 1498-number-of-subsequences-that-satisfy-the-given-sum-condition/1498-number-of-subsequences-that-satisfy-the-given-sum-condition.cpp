class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {

        int n = nums.size();
        int mod = 1000000007;

        sort(nums.begin(), nums.end());

        vector<int> power(n, 1);

        for(int i = 1; i < n; i++) {
            power[i] = (power[i-1] * 2LL) % mod;
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {

            int low = i;
            int high = n - 1;
            int j = -1;

            while(low <= high) {

                int mid = low + (high - low) / 2;

                if(nums[i] + nums[mid] <= target) {
                    j = mid;
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }

            if(j != -1) {
                ans = (ans + power[j-i]) % mod;
            }
        }

        return ans;
    }
};
