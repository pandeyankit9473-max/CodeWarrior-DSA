class Solution {
    vector<array<int, 27>> calc(string& s) {
        int n = s.size();
        vector<array<int, 27>> f(n);

        for (int d = 1; d <= 26; d++) {
            int freq[26] = {};
            int left = 0, distinct = 0;

            for (int right = 0; right < n; right++) {
                if (freq[s[right] - 'a']++ == 0)
                    distinct++;

                while (distinct > d) {
                    if (--freq[s[left++] - 'a'] == 0)
                        distinct--;
                }

                f[right][d] = right - left + 1;
            }
        }
        return f;
    }

public:
    long long countMagicalPairs(string s) {
        int n = s.size();

        auto left = calc(s);
        reverse(s.begin(), s.end());
        auto right = calc(s);

        long long ans = 0;

        for (int j = 0; j < n - 1; j++) {
            int r = n - 2 - j;

            for (int d = 1; d <= 26; d++) {
                long long L = left[j][d] - left[j][d - 1];
                long long R = right[r][d] - right[r][d - 1];

                ans += L * R;
            }
        }

        return ans;
    }
};