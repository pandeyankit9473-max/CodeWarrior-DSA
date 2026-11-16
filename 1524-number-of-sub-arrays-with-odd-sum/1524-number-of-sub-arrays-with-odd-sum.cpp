class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;
        vector<int> pf(n + 1, 0);
        for (int i = 0; i < n; i++)
            pf[i + 1] = pf[i] + arr[i];
        long long even = 0, odd = 0;

        for (int i = 0; i <= n; i++) {
            if (pf[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        return (even * odd) % MOD;
    }
};

// class Solution {
// public:
//     int numOfSubarrays(vector<int>& arr) {
//         const int MOD = 1e9 + 7;

//         long long sum = 0;
//         long long even = 1, odd = 0;
//         long long ans = 0;

//         for(int x : arr) {

//             sum += x;

//             if(sum % 2 == 0) {
//                 ans = (ans + odd) % MOD;
//                 even++;
//             }
//             else {
//                 ans = (ans + even) % MOD;
//                 odd++;
//             }
//         }

//         return ans;
//     }
// };