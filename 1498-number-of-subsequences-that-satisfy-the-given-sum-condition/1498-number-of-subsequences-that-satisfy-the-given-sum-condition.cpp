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

        int l=0, r=n-1;
        int ans=0;
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                int diff=r-l;
                ans=(ans%mod+power[diff])%mod;
                l++;
            }
            else r--;
        }
         return ans;
    }
};

// int ans = 0;

//         for(int i = 0; i < n; i++) {

//             int low = i;
//             int high = n - 1;
//             int j = -1;

//             while(low <= high) {

//                 int mid = low + (high - low) / 2;

//                 if(nums[i] + nums[mid] <= target) {
//                     j = mid;
//                     low = mid + 1;
//                 }
//                 else {
//                     high = mid - 1;
//                 }
//             }

//             if(j != -1) {
//                 ans = (ans + power[j-i]) % mod;
//             }
//         }

//         return ans;