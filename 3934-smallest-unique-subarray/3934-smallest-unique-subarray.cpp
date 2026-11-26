class Solution {
public:
    typedef long long ll;
    int mod = 1e9 + 7;

    // bianry exponenetation for power calculation
    ll findPower(ll a, ll base) {
        if (base == 0)
            return 1;
        ll half = findPower(a, base / 2);
        ll result = (half * half)%mod;
        if (base % 2 == 1)
            result = (a * result) % mod; // for odd base
        return result;
    }

    bool check(vector<int>& nums, int size, int base) {
        int n = nums.size();
        ll hash = 0;
        unordered_map<ll, int> mp;

        ll p = findPower(base, size - 1);

        int i = 0, j = 0;
        while (j < n) {
            hash = (hash * base + nums[j]) % mod;

            if (j - i + 1 == size) {
                mp[hash]++;
                hash =(hash - (p * nums[i]) % mod + mod) % mod; 
                    // actualyy we are removing the last element for going
                         // for the next subarray so we will just remove it..
                i++;
            }
            j++;
        }
        for (auto& it : mp) {
            if (it.second == 1)
                return true;
        }

        return false;
    }

    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int base = *max_element(nums.begin(), nums.end()) + 1;
        int ans = n;
        int l = 1, r = n;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (check(nums, mid, base)) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        return ans;
    }
};