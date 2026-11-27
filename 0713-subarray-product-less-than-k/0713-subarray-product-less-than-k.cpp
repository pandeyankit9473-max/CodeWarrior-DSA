class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;

        int n = nums.size();
        int i = 0;
        long long p = 1;
        int cnt = 0;

        for(int j = 0; j < n; j++) {
            p *= nums[j];

            while(p >= k) {
                p /= nums[i];
                i++;
            }

            cnt += (j - i + 1);
        }

        return cnt;
    }
};