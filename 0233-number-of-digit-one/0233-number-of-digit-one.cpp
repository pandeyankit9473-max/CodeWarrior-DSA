class Solution {
public:
    int countDigitOne(int n) {

        long long count = 0;

        // 1 → ones
        // 10 → tens
        // 100 → hundreds
        // 1000 → thousands
        for (long long position = 1; position <= n; position *= 10) {

            // Complete groups
            long long complete = n / (position * 10);

            // Remaining part
            long long remaining = n % (position * 10);

            count += complete * position;

            // Count 1s from remaining part
            long long extra = remaining - position + 1;

            if (extra < 0)
                extra = 0;

            if (extra > position)
                extra = position;

            count += extra;
        }

        return count;
    }
};